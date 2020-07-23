#ifndef __ATSAM3x8E_ARM_CORTEX_M3_SCB_H__
#define __ATSAM3x8E_ARM_CORTEX_M3_SCB_H__

// Auxiliary control register
#define CORTEX_M3_SCB_ACTRL 0xE000E008

// cpuid
#define CORTEX_M3_SCB_CPUID 0xE000ED00

// interrupt control and state register
#define CORTEX_M3_SCB_ICSR 0xE000ED04

// vector table offset register
#define CORTEX_M3_SCB_VTOR 0xE000ED08

// application interrupt and reset control register
#define CORTEX_M3_SCB_AIRCR 0xE000ED0C

// system control register
#define CORTEX_M3_SCB_SCR 0xE000ED10

// configuration and control register
#define CORTEX_M3_SCB_CCR 0xE000ED14

#define CORTEX_M3_CPU_ID_IMPLEMENTER_ARM 0x41
#define CORTEX_M3_CPU_ID_PART_NO 0xC23

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

// get cpuid
int ARM_cortex_m3_get_cpuid(struct arm_cortex_m3_cpuid *cpuid);

#endif

