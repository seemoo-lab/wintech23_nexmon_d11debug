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

#include <firmware_version.h>
#include <wrapper.h>	// wrapper definitions for functions that already exist in the firmware
#include <structs.h>	// structures that are used by the code in the firmware
#include <patcher.h>
#include <helper.h>
#include <capabilities.h>      // capabilities included in a nexmon patch

int capabilities = 0;

// Hook the call to wlc_ucode_write in wlc_ucode_download
__attribute__((at(WLC_UCODE_WRITE_BL_HOOK_ADDR, "", CHIP_VER_ALL, FW_VER_ALL)))
BLPatch(wlc_ucode_write_compressed, wlc_ucode_write_compressed);

__attribute__((at(HNDRTE_RECLAIM_0_END_PTR, "", CHIP_VER_ALL, FW_VER_ALL)))
GenericPatch4(hndrte_reclaim_0_end, PATCHSTART);

//skip first interrupt check in wlc_bmac_suspend_mac_and_wait
__attribute__((at(0x1BF133, "", CHIP_VER_BCM43455c0, FW_VER_7_45_241)))
GenericPatch1(nohammer, 0xe0)

extern unsigned char templateram_bin[];

// Moving template ram to another place in the ucode region
#if TEMPLATERAMSTART_PTR != 0
__attribute__((at(TEMPLATERAMSTART_PTR, "", CHIP_VER_ALL, FW_VER_ALL)))
GenericPatch4(templateram_bin, templateram_bin);
#endif
