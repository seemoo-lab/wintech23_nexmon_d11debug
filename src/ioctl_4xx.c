/***************************************************************************
 *                                                                         *
 *          ###########   ###########   ##########    ##########           *
 *         ############  ############  ############  ############          *
 *         ##            ##            ##   ##   ##  ##        ##          *
 *         ##            ##            ##   ##   ##  ##        ##          *
 *         ###########   ####  ######  ##   ##   ##  ##    ######          *
 *          ###########  ####  #       ##   ##   ##  ##    #    #          *
 *                   ##  ##    ######  ##   ##   ##  ##    #    #          *
 *                   ##  ##    #       ##   ##   ##  ##    #    #          *
 *         ############  ##### ######  ##   ##   ##  ##### ######          *
 *         ###########    ###########  ##   ##   ##   ##########           *
 *                                                                         *
 *            S E C U R E   M O B I L E   N E T W O R K I N G              *
 *                                                                         *
 * This file is part of NexMon.                                            *
 *                                                                         *
 * Copyright (c) 2023 Jakob Link, David Breuer                             *
 *                                                                         *
 * NexMon is free software: you can redistribute it and/or modify          *
 * it under the terms of the GNU General Public License as published by    *
 * the Free Software Foundation, either version 3 of the License, or       *
 * (at your option) any later version.                                     *
 *                                                                         *
 * NexMon is distributed in the hope that it will be useful,               *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 * GNU General Public License for more details.                            *
 *                                                                         *
 * You should have received a copy of the GNU General Public License       *
 * along with NexMon. If not, see <http://www.gnu.org/licenses/>.          *
 *                                                                         *
 * If any use of the software results in an academic publication, please   *
 * include citations to the paper cited under a) and the Nexmon project b):*
 *                                                                         *
 *  a) "Jakob Link, David Breuer, Francesco Gringoli, and Matthias Hollick.*
 *      2023. Rolling the D11: An Emulation Game for the Whole BCM43 Fa-   *
 *      mily. In The 17th ACM Workshop on Wireless Network Testbeds,       *
 *      Experimental evaluation & Characterization 2023 (ACM WiNTECH’ 23), *
 *      October 6, 2023, Madrid, Spain. ACM, New York, NY, USA, 8 pages.   *
 *      https://doi.org/10.1145/3615453.3616520"                           *
 *  b) "Matthias Schulz, Daniel Wegemer and Matthias Hollick. Nexmon:      *
 *      The C-based Firmware Patching Framework. https://nexmon.org"       *
 *                                                                         *
 **************************************************************************/

#pragma NEXMON targetregion "patch"

#include <firmware_version.h>   // definition of firmware version macros
#include <wrapper.h>            // wrapper definitions for functions that already exist in the firmware
#include <structs.h>            // structures that are used by the code in the firmware
#include <helper.h>             // useful helper functions
#include <patcher.h>            // macros used to craete patches such as BLPatch, BPatch, ...
#include <nexioctls.h>          // ioctls added in the nexmon patch
#include <capabilities.h>       // capabilities included in a nexmon patch
#include <sendframe.h>          // sendframe functionality
#include <objmem.h>             // Functions to access object memory
#include <ieee80211_radiotap.h> // Radiotap header related
#include <securitycookie.h>     // Security cookie related
#include <version.h>            // version information
#include <argprintf.h>          // allows to execute argprintf to print into the arg buffer

int
wlc_ioctl_4xx(struct wlc_info *wlc, int cmd, char *arg, int len, void *wlc_if)
{
    int ret = IOCTL_ERROR;

    switch (cmd) {
        case NEX_GET_PHYREG:
            // reads the value from arg[0] to arg[0]
            if(wlc->hw->up && len >= 4) {
                wlc_phyreg_enter(wlc->band->pi);
                *(int *) arg =  phy_reg_read(wlc->band->pi, ((int *) arg)[0]);
                wlc_phyreg_exit(wlc->band->pi);
                ret = IOCTL_SUCCESS;
            }
            break;

        case NEX_SET_PHYREG:
            // writes the value arg[1] to physical layer register arg[0]
            if(wlc->hw->up && len >= 8) {
                wlc_phyreg_enter(wlc->band->pi);
                phy_reg_write(wlc->band->pi, ((int *) arg)[1], ((int *) arg)[0]);
                wlc_phyreg_exit(wlc->band->pi);
                ret = IOCTL_SUCCESS;
            }
            break;

        case NEX_READ_OBJMEM:
            {
            set_scansuppress(wlc, 1);
            set_mpc(wlc, 0);
            if(wlc->hw->up && len >= 4)
            {
                int addr = ((int *) arg)[0];
                int i = 0;
                
                for (i = 0; i < len/4; i++) {
                    wlc_bmac_read_objmem32_objaddr(wlc->hw, addr + i, &((unsigned int *) arg)[i]);
                }
                ret = IOCTL_SUCCESS;
            }
            }
            break;

        case NEX_WRITE_OBJMEM:
            {
            uint32 scansuppress = get_scansuppress(wlc);
            uint32 mpc = get_mpc(wlc);
            set_scansuppress(wlc, 1);
            set_mpc(wlc, 0);
            if(wlc->hw->up && len >= 5)
            {
                int addr = ((int *) arg)[0];
                int i = 0;
                
                for (i = 0; i < (len-4)/8; i+=2) {
                    wlc_bmac_write_objmem64_objaddr(wlc->hw, addr + i, ((unsigned int *) arg)[i + 1], ((unsigned int *) arg)[i + 2]);
                }

                switch((len-4) % 8) {
                    case 4:
                        wlc_bmac_write_objmem32_objaddr(wlc->hw, addr + i, ((unsigned int *) arg)[i + 1]);
                        break;
                }

                ret = IOCTL_SUCCESS;
            }
            set_mpc(wlc, mpc);
            set_scansuppress(wlc, scansuppress);
            }
            break;

        case NEX_GET_VERSION_STRING:
            {
                if (len >= strlen(version)) {
                    memcpy(arg, version, strlen(version));
                    ret = IOCTL_SUCCESS;
                }
            }
            break;
    }

    return ret;
}
