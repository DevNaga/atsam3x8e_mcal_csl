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

// PMC peripheral clock enable register - write only
#define PMC_PCER0 0x400E0610

#define PMC_PCER1 0x400E0700

// get USB OTG clock .. 5 th bit
#define PMC_SCSR_USB_OTG_CLK_GET(__val) (__val = !!((*(unsigned int *)(PMC_SCSR)) >> 5))

// enable USB OTG
#define PMC_SCSR_USB_OTG_CLK_EN() ((*(unsigned int *)(PMC_SCSR)) |= 0x20)

void PMC_Enable_UOTGCLK();

void PMC_Enable_PCK_0();

void PMC_Enable_PCK_1();

void PMC_Enable_PCK_2();

#endif

