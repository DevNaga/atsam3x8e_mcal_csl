/**
 * 
 * @brief - implements pmc controller
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3x8E_PMC_H__
#define __ATSAM3x8E_PMC_H__

// PMC system clock enable register
#define PMC_SCER 0x400E0600

// PMC system clock status register
#define PMC_SCSR 0x400E0608

// PMC peripheral clock enable register 0 - write only
#define PMC_PCER0 0x400E0610

// PMC peripheral clock enable register 1 - write only
#define PMC_PCER1 0x400E0700

// PMC peripheral clock status register 1
#define PMC_PCSR1 0x400E0708

// get USB OTG clock .. 5 th bit
#define PMC_SCSR_USB_OTG_CLK_GET(__val) (__val = !!((*(unsigned int *)(PMC_SCSR)) >> 5))

// enable USB OTG
#define PMC_SCSR_USB_OTG_CLK_EN() ((*(unsigned int *)(PMC_SCSR)) |= 0x20)

void PMC_Enable_UOTGCLK();

void PMC_Enable_PCK_0();

void PMC_Enable_PCK_1();

void PMC_Enable_PCK_2();

// enable TRNG peripheral clock
void PMC_Enable_Periph_TRNG();

// check if TRNG peripheral clock is enabled
int PMC_Check_Periph_TRNG();

void PMC_Enable_Periph_TWI0();

void PMC_Enable_Periph_TWI1();

#endif

