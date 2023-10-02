![NexMon logo](https://github.com/seemoo-lab/nexmon/raw/master/gfx/nexmon.png)
# Nexmon D11 Debug Patch
This [Nexmon](https://nexmon.org) patch enables rudimentary D11 debug functionalities and state extraction. Designed for the use with [d11emu](https://github.com/seemoo-lab/d11-emu) (and enclosed utilities).

Currently optimized for the Broadcom/Cypress WiFi chip bcm43455c0 as used on the Raspberry Pi 3 Model B+ and Raspberry Pi 4 Model B.

## Installation
1. Follow the installation instructions of the base [Nexmon](https://github.com/seemoo-lab/nexmon#build-patches-for-bcm43430a1-on-the-rpi3zero-w-or-bcm434355c0-on-the-rpi3rpi4-or-bcm43436b0-on-the-rpi-zero-2w-using-raspbianraspberry-pi-os-recommended) repository for Raspberry Pis. 
2. Install one additional dependency, compile nexutil with the `USE_VENDOR_CMD=1` flag, and extend its rights with the following commands:
    ```
    sudo apt install libnl-genl-3-dev
    cd nexmon
    source setup_env.sh
    cd utilities/nexutil
    make USE_VENDOR_CMD=1
    sudo make install USE_VENDOR_CMD=1
    sudo setcap 'cap_net_admin=eip' /usr/bin/nexutil
    ```
2. Clone this repository as a subdirectory of the `nexmon/patches/bcm43455c0/7_45_241/` directory of the Nexmon repository, e.g. like this: 
    ```
    cd nexmon/patches/bcm43455c0/7_45_241/
    git clone https://github.com/seemoo-lab/wintech23_nexmon_d11debug.git d11debug
    ```
3. (Don't forget to `source nexmon/setup_env.sh` before working with Nexmon.)
4. Enter the created subdirectory, e.g. `cd d11debug`.
5. Execute `make` to build the D11 debug firmware.
6. Execute `sudo -E make install-firmware` to build the D11 debug firmware and load it on the WiFi chip.

### How to specify a microcode patch
When the `make` command is executed, the `d11debug.ucode.beaut.patch` file is used to create `d11debug.ucode.beaut.asm` and include it in the firmware binary. If the `.asm` file already exists, it is directly assembled and included in the firmware binary. In order to create a firmware binary containing a different microcode patch, e.g. our showcase, the `.asm` file can be specified as the `UCODEFILE` argument of the `make` command:
```
make UCODEFILE=d11debug.ucode.showcase.beaut.asm
```
This command uses the `d11debug.ucode.showcase.beaut.patch` file to create `d11debug.ucode.showcase.beaut.asm` and include it in the firmware binary. If `d11debug.ucode.showcase.beaut.asm` already exists, the patching step is skipped.
### Obtain a patched microcode binary
The patched microcode binary of the last compiled firmware patch is always located at `gen/ucode.bin`. E.g., this file can be loaded in the [D11 Emulator](https://github.com/seemoo-lab/d11-emu).

## Adding microcode breakpoints
To add a microcode breakpoint, add the following two lines at the desired microcode location:
```
mov 0x1, r10
calls LX2_stop_psm
```

The number, specified in the first line (in this case 0x1), is used to identify this particular breakpoint. Avoid implementing multiple breakpoints with the same identifier.

After adding breakpoints to the microcode, rebuild and reload the firmware.
Breakpoints can then be instrumented with the help of the `/d11debug_bcm43455c0.py` utility, which is part of the [D11 Emulator](https://github.com/seemoo-lab/d11-emu) repository. Complete state extraction is possible through the D11 Emulator.

# Cite our Paper
If any use of this work results in an academic publications, please include citations to the paper cited under (1) and the Nexmon project (2).

1. Jakob Link, David Breuer, Francesco Gringoli, and Matthias Hollick. 2023. [**Rolling the D11: An Emulation Game for the Whole BCM43 Family**](https://doi.org/10.1145/3615453.3616520). In The 17th ACM Workshop on Wireless Network Testbeds, Experimental evaluation & Characterization 2023 (ACM WiNTECH’ 23), October 6, 2023, Madrid, Spain. ACM, New York, NY, USA, 8 pages. https://doi.org/10.1145/3615453.3616520
2. Matthias Schulz, Daniel Wegemer and Matthias Hollick. **Nexmon: The C-based Firmware Patching 
  Framework**. https://nexmon.org

# Contact
* David Breuer <dbreuer@seemoo.tu-darmstadt.de>
* Jakob Link <jlink@seemoo.tu-darmstadt.de>

# Powered By
### Secure Mobile Networking Lab (SEEMOO)
<a href="https://www.seemoo.tu-darmstadt.de">![SEEMOO logo](https://github.com/seemoo-lab/nexmon/raw/master/gfx/seemoo.png)</a>
### Multi-Mechanisms Adaptation for the Future Internet (MAKI)
<a href="http://www.maki.tu-darmstadt.de/">![MAKI logo](https://github.com/seemoo-lab/nexmon/raw/master/gfx/maki.png)</a>
### Technische Universität Darmstadt
<a href="https://www.tu-darmstadt.de/index.en.jsp">![TU Darmstadt logo](https://github.com/seemoo-lab/nexmon/raw/master/gfx/tudarmstadt.png)</a>
### University of Brescia
<a href="http://netweb.ing.unibs.it/">![University of Brescia logo](https://github.com/seemoo-lab/nexmon/raw/master/gfx/brescia.png)</a>
