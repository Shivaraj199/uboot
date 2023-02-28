/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2020 Microchip Technology Inc.
 * Padmarao Begari <padmarao.begari@microchip.com>
 */
#ifndef __MICROCHIP_MPFS_CLK_H
#define __MICROCHIP_MPFS_CLK_H

#include <linux/clk-provider.h>
/**
 * mpfs_clk_register_cfgs() - register configuration clocks
 *
 * @base: base address of the mpfs system register.
<<<<<<< HEAD
 * @clk_rate: the mpfs pll clock rate.
 * @parent_name: a pointer to parent clock name.
=======
 * @parent: a pointer to parent clock.
>>>>>>> b356a897b11ef19dcbe7870530f23f3a978c1714
 * Return: zero on success, or a negative error code.
 */
int mpfs_clk_register_cfgs(void __iomem *base, struct clk *parent);
/**
 * mpfs_clk_register_msspll() - register the mss pll
 *
 * @base: base address of the mpfs system register.
 * @parent: a pointer to parent clock.
 * Return: zero on success, or a negative error code.
 */
int mpfs_clk_register_msspll(void __iomem *base, struct clk *parent);
/**
 * mpfs_clk_register_periphs() - register peripheral clocks
 *
 * @base: base address of the mpfs system register.
<<<<<<< HEAD
 * @clk_rate: the mpfs pll clock rate.
 * @parent_name: a pointer to parent clock name.
=======
 * @dev: udevice representing the clock controller.
>>>>>>> b356a897b11ef19dcbe7870530f23f3a978c1714
 * Return: zero on success, or a negative error code.
 */
int mpfs_clk_register_periphs(void __iomem *base, struct udevice *dev);
/**
 * divider_get_val() - get the clock divider value
 *
 * @rate: requested clock rate.
 * @parent_rate: parent clock rate.
 * @table: a pointer to clock divider table.
 * @width: width of the divider bit field.
 * @flags: common clock framework flags.
 * Return: divider value on success, or a negative error code.
 */
int divider_get_val(unsigned long rate, unsigned long parent_rate,
		    const struct clk_div_table *table,
		    u8 width, unsigned long flags);

#endif	/* __MICROCHIP_MPFS_CLK_H */
