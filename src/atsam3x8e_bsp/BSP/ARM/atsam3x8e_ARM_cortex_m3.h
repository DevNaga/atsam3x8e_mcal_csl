/**
 * 
 * @brief - ARM Cortex-M3 base processor core definitions
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3x8E_ARM_CORTEX_M3_H__
#define __ATSAM3x8E_ARM_CORTEX_M3_H__

#include "atsam3x8e_ARM_cortex_m3_mpu.h"
#include "atsam3x8e_ARM_cortex_m3_scb.h"
#include "atsam3x8e_ARM_cortex_m3_nvic.h"

#define CORTEX_M3_PSR
#define CORTEX_M3_APSR
#define CORTEX_M3_IPSR
#define CORTEX_M3_EPSR


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

#endif

