#include "atsam3x8e_ARM_cortex_m3_scb.h"

int ARM_cortex_m3_get_cpuid(struct arm_cortex_m3_cpuid *cpuid)
{
    unsigned int *cpuid_base_reg = (unsigned int *)CORTEX_M3_SCB_CPUID;

    cpuid->implementer = ((*cpuid_base_reg) & 0xFF000000) >> 24;
    cpuid->variant = ((*cpuid_base_reg) & 0x00F00000) >> 20;
    cpuid->constant = ((*cpuid_base_reg) & 0x000F0000) >> 16;
    cpuid->partno = ((*cpuid_base_reg) & 0x0000FFF0) >> 4;
    cpuid->revision = ((*cpuid_base_reg & 0x0000000F));

    return 0;
}

