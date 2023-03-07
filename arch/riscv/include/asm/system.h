/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2017 Andes Technology Corporation
 * Rick Chen, Andes Technology Corporation <rick@andestech.com>
 */

#ifndef __ASM_RISCV_SYSTEM_H
#define __ASM_RISCV_SYSTEM_H

struct event;

/*
 * Interrupt configuring macros.
 *
 * TODO
 *
 */

<<<<<<< HEAD
<<<<<<< HEAD
/* Hook to set up the CPU (called from SPL too) */
int riscv_cpu_setup(void *ctx, struct event *event);
=======
=======
>>>>>>> b356a897b11ef19dcbe7870530f23f3a978c1714
static inline void local_irq_save(
	unsigned long flags __attribute__((unused)))
{
	__asm__ __volatile__ ("" : : : "memory");
}

static inline void local_irq_enable(void)
{
	__asm__ __volatile__ ("" : : : "memory");
}

static inline void local_irq_disable(void)
{
	__asm__ __volatile__ ("" : : : "memory");
}

static inline void local_save_flags(
	unsigned long flags __attribute__((unused)))
{
	__asm__ __volatile__ ("" : : : "memory");
}

static inline void local_irq_restore(
	unsigned long flags __attribute__((unused)))
{
	__asm__ __volatile__ ("" : : : "memory");
}
<<<<<<< HEAD
>>>>>>> b356a897b11ef19dcbe7870530f23f3a978c1714
=======
>>>>>>> b356a897b11ef19dcbe7870530f23f3a978c1714

#endif	/* __ASM_RISCV_SYSTEM_H */
