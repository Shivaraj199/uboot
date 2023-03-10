#ifndef __CONFIG_H
#define __CONFIG_H

#include <linux/sizes.h>

#define CONFIG_SYS_SDRAM_BASE       0x80000000
#define CONFIG_SYS_INIT_SP_ADDR     (CONFIG_SYS_SDRAM_BASE + SZ_2M)

#define CONFIG_SYS_BOOTM_LEN        SZ_64M

#define CONFIG_STANDALONE_LOAD_ADDR 0x80200000

/* Environment options */

#define BOOT_TARGET_DEVICES(func) \
    func(MMC, mmc, 0) \
    func(DHCP, dhcp, na)

#include <config_distro_bootcmd.h>

#define CONFIG_EXTRA_ENV_SETTINGS \
    "fdt_high=0xffffffffffffffff\0" \
    "initrd_high=0xffffffffffffffff\0" \
    "kernel_addr_r=0x84000000\0" \
    "fdt_addr_r=0x88000000\0" \
    "scriptaddr=0x88100000\0" \
    "pxefile_addr_r=0x88200000\0" \
    "ramdisk_addr_r=0x88300000\0" \
    BOOTENV

#endif /* __CONFIG_H */
