/**
 * 
 * @brief - implements ARM Cortex-M3 MPU definitions
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3x8E_ARM_CORTEX_M3_MPU_H__
#define __ATSAM3x8E_ARM_CORTEX_M3_MPU_H__

#define CORTEX_M3_MPU_TYPE_REG 0xE000ED90
#define CORTEX_M3_MPU_CTRL_REG 0xE000ED94
#define CORTEX_M3_MPU_CTRL_RNR 0xE000ED98

struct cortex_m3_get_mpu_type_region {
    unsigned char IREGION;
    unsigned char DREGION;
    unsigned char SEPARATE;
};

// Indicates the number of supported MPU instruction regions
// always contains 0x00. The MPU memory map is unified and is described by the DREGION field
int cortex_m3_mpu_tr_get_iregion();

// Indicates the number of supported MPU data regions
// 0x08 - 8 data regions
int cortex_m3_mpu_tr_get_dregion();

// Indicates the support for unified or separate instruction and data memory maps
// 0 - unified
int cortex_m3_mpu_tr_get_separate();

// check if MPU is enabled
int cortex_m3_mpu_cr_get_enable();

#endif

