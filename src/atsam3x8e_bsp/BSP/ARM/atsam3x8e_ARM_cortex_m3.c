/**
 * 
 * @brief - ARM Cortex-M3 definitions
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#include "atsam3x8e_ARM_cortex_m3.h"

int ARM_cortex_m3_get_n()
{

}

int ARM_cortex_m3_get_z()
{

}

int ARM_cortex_m3_get_c()
{

}

int ARM_cortex_m3_get_isr_nunber()
{

}

int ARM_cortex_m3_get_cpuid(struct arm_cortex_m3_cpuid *cpuid)
{
    unsigned int *cpuid_base_reg = (unsigned int *)CORTEX_M3_CPUID_BASE_REG;

    cpuid->implementer = ((*cpuid_base_reg) & 0xFF000000) >> 24;
    cpuid->variant = ((*cpuid_base_reg) & 0x00F00000) >> 20;
    cpuid->constant = ((*cpuid_base_reg) & 0x000F0000) >> 16;
    cpuid->partno = ((*cpuid_base_reg) & 0x0000FFF0) >> 4;
    cpuid->revision = ((*cpuid_base_reg & 0x0000000F));

    return 0;
}

