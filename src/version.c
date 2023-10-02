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
#include <patcher.h>            // macros used to craete patches such as BLPatch, BPatch, ...

#if ((NEXMON_CHIP == CHIP_VER_BCM43455c0) && (NEXMON_FW_VERSION == FW_VER_7_45_241))
char version[] = "7.45.241 (nexmon d11emu: " GIT_VERSION "-" BUILD_NUMBER ")";
char date[] = __DATE__;
char time[] = __TIME__;
__attribute__((at(DATE_PTR, "", CHIP_VER_BCM43455c0, FW_VER_7_45_241)))
GenericPatch4(date_patch, date);
__attribute__((at(TIME_PTR, "", CHIP_VER_BCM43455c0, FW_VER_7_45_241)))
GenericPatch4(time_patch, time);
#endif
__attribute__((at(VERSION_PTR, "", CHIP_VER_ALL, FW_VER_ALL)))
GenericPatch4(version_patch, version);
