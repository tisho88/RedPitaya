/*
 * (C) Copyright 2007-2008 Michal Simek
 *
 * Michal SIMEK <monstr@monstr.eu>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 * CAUTION: This file is automatically generated by libgen.
 * Version: Xilinx EDK 14.6 EDK_P.68d
 * Generate by U-BOOT v4.00.c
 * Project description at http://www.monstr.eu/uboot/
 */

#define XILINX_BOARD_NAME	U-BOOT_BSP

/* ARM is ps7_cortexa9_0 */
#define XPAR_CPU_CORTEXA9_CORE_CLOCK_FREQ_HZ	666666687

/* Interrupt controller is ps7_scugic_0 */
#define XILINX_PS7_INTC_BASEADDR		0xf8f00100

/* System Timer Clock Frequency */
#define XILINX_PS7_CLOCK_FREQ	333333343

/* Uart console is ps7_uart_0 */
#define XILINX_PS7_UART
#define XILINX_PS7_UART_BASEADDR	0xe0000000
#define XILINX_PS7_UART_CLOCK_HZ	100000000

/* IIC pheriphery is ps7_i2c_0 */
#define XILINX_PS7_IIC_BASEADDR		0xe0004000

/* GPIO doesn't exist */

/* SDIO controller is ps7_sd_0 */
#define XILINX_PS7_SDIO_BASEADDR		0xe0100000

/* Main Memory is ps7_ddr_0 */
#define XILINX_RAM_START	0x00100000
#define XILINX_RAM_SIZE		0x1ff00000

/* FLASH doesn't exist none */

/* Sysace doesn't exist */

/* Ethernet doesn't exist */