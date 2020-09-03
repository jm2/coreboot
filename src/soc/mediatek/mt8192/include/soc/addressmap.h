/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef __SOC_MEDIATEK_MT8192_INCLUDE_SOC_ADDRESSMAP_H__
#define __SOC_MEDIATEK_MT8192_INCLUDE_SOC_ADDRESSMAP_H__

enum {
	MCUSYS_BASE	= 0x0C530000,
	MCUPM_SRAM_BASE	= 0x0C540000,
	MCUPM_CFG_BASE	= 0x0C560000,
	IO_PHYS		= 0x10000000,
};

enum {
	MCUCFG_BASE		= MCUSYS_BASE + 0x00008000,
};

enum {
	CKSYS_BASE		= IO_PHYS,
	INFRACFG_AO_BASE	= IO_PHYS + 0x00001000,
	GPIO_BASE		= IO_PHYS + 0x00005000,
	SPM_BASE		= IO_PHYS + 0x00006000,
	RGU_BASE		= IO_PHYS + 0x00007000,
	GPT_BASE		= IO_PHYS + 0x00008000,
	EINT_BASE		= IO_PHYS + 0x0000B000,
	APMIXED_BASE		= IO_PHYS + 0x0000C000,
	PMIF_SPI_BASE		= IO_PHYS + 0x00026000,
	PMIF_SPMI_BASE		= IO_PHYS + 0x00027000,
	PMICSPI_MST_BASE	= IO_PHYS + 0x00028000,
	SPMI_MST_BASE		= IO_PHYS + 0x00029000,
	I2C_DMA_BASE		= IO_PHYS + 0x00217080,
	SSPM_SRAM_BASE		= IO_PHYS + 0x00400000,
	SSPM_CFG_BASE		= IO_PHYS + 0x00440000,
	DPM_PM_SRAM_BASE	= IO_PHYS + 0x00900000,
	DPM_DM_SRAM_BASE	= IO_PHYS + 0x00920000,
	DPM_CFG_BASE		= IO_PHYS + 0x00940000,
	AUXADC_BASE		= IO_PHYS + 0x01001000,
	UART0_BASE		= IO_PHYS + 0x01002000,
	SPI0_BASE		= IO_PHYS + 0x0100A000,
	SPI1_BASE		= IO_PHYS + 0x01010000,
	SPI2_BASE		= IO_PHYS + 0x01012000,
	SPI3_BASE		= IO_PHYS + 0x01013000,
	SPI4_BASE		= IO_PHYS + 0x01018000,
	SPI5_BASE		= IO_PHYS + 0x01019000,
	SPI6_BASE		= IO_PHYS + 0x0101D000,
	SPI7_BASE		= IO_PHYS + 0x0101E000,
	SSUSB_IPPC_BASE		= IO_PHYS + 0x01203e00,
	SFLASH_REG_BASE		= IO_PHYS + 0x01234000,
	EFUSEC_BASE		= IO_PHYS + 0x01C10000,
	IOCFG_RM_BASE		= IO_PHYS + 0x01C20000,
	I2C_BASE		= IO_PHYS + 0x01CB0000,
	IOCFG_BM_BASE		= IO_PHYS + 0x01D10000,
	IOCFG_BL_BASE		= IO_PHYS + 0x01D30000,
	IOCFG_BR_BASE		= IO_PHYS + 0x01D40000,
	IOCFG_LM_BASE		= IO_PHYS + 0x01E20000,
	SSUSB_SIF_BASE		= IO_PHYS + 0x01E40300,
	MIPITX_BASE		= IO_PHYS + 0x01E50000,
	IOCFG_LB_BASE		= IO_PHYS + 0x01E70000,
	IOCFG_RT_BASE		= IO_PHYS + 0x01EA0000,
	IOCFG_LT_BASE		= IO_PHYS + 0x01F20000,
	IOCFG_TL_BASE		= IO_PHYS + 0x01F30000,
	MSDC0_TOP_BASE		= IO_PHYS + 0x01F50000,
	MSDC0_BASE		= IO_PHYS + 0x01F60000,
	MMSYS_BASE		= IO_PHYS + 0x04000000,
	DISP_MUTEX_BASE		= IO_PHYS + 0x04001000,
	SMI_BASE		= IO_PHYS + 0x04002000,
	SMI_LARB0		= IO_PHYS + 0x04003000,
	DISP_OVL0_BASE		= IO_PHYS + 0x04005000, /* ovl0 */
	DISP_OVL1_BASE		= IO_PHYS + 0x04006000, /* ovl0_2l */
	DISP_RDMA0_BASE		= IO_PHYS + 0x04007000,
	DISP_COLOR0_BASE	= IO_PHYS + 0x04009000,
	DISP_CCORR0_BASE	= IO_PHYS + 0x0400A000,
	DISP_AAL0_BASE		= IO_PHYS + 0x0400B000,
	DISP_GAMMA0_BASE	= IO_PHYS + 0x0400C000,
	DISP_POSTMASK0_BASE	= IO_PHYS + 0x0400D000,
	DISP_DITHER0_BASE	= IO_PHYS + 0x0400E000,
	DSI0_BASE		= IO_PHYS + 0x04010000,
};

#endif
