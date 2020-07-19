#ifndef __ATSAM3x8E_ARM_CORTEX_M3_H__
#define __ATSAM3x8E_ARM_CORTEX_M3_H__

#define CORTEX_M3_PSR
#define CORTEX_M3_APSR
#define CORTEX_M3_IPSR
#define CORTEX_M3_EPSR

#define CORTEX_M3_CPUID_BASE_REG 0xE000ED00

struct arm_cortex_m3_cpuid {
    // 0x41 = ARM
    unsigned char implementer;

    // 0x2 = r2p0  - r value of rnpn product version
    unsigned char variant;

    // constant
    unsigned char constant;

    // part number
    unsigned short partno;

    // revision - p value of rnpn product version
    unsigned char revision;
};

enum arm_cortex_m3_isr_types {
    M3_ISR_TYPE_THREAD_MODE = 0,
    M3_ISR_TYPE_RESERVED_1,
    M3_ISR_TYPE_NMI,
    M3_ISR_TYPE_HARD_FAULT,
    M3_ISR_TYPE_MEMORY_MGMT_FAULT,
    M3_ISR_TYPE_BUS_FAULT,
    M3_ISR_TYPE_USAGE_FAULT,
    M3_ISR_TYPE_SVCALL = 11,
    M3_ISR_TYPE_RESERVED_FOR_DEBUG = 12,
    M3_ISR_TYPE_RESERVED = 13,
    M3_ISR_TYPE_PEND_SV = 14,
    M3_ISR_TYPE_SYSTICK = 15,
    M3_ISR_TYPE_IRQ0 = 16,
    M3_ISR_TYPE_IRQ29 = 45,
};

// get cpuid
int ARM_cortex_m3_get_cpuid(struct arm_cortex_m3_cpuid *cpuid);

#endif

