#ifndef __ATSAM3x8E_PMC_H__
#define __ATSAM3x8E_PMC_H__

// PMC system clock status register
#define PMC_SCSR 0x400E0608

// PMC peripheral clock enable register - write only
#define PMC_PCER0 0x400E0610

// get USB OTG clock .. 5 th bit
#define PMC_SCSR_USB_OTG_CLK_GET(__val) (__val = !!((*(unsigned int *)(PMC_SCSR)) >> 5))

// enable USB OTG
#define PMC_SCSR_USB_OTG_CLK_EN() ((*(unsigned int *)(PMC_SCSR)) |= 0x20)

#endif

