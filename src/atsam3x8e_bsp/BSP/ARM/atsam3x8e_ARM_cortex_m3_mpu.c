#include "atsam3x8e_ARM_cortex_m3_mpu.h"

int cortex_m3_mpu_tr_get_iregion()
{
    unsigned int *mpu_type_reg = (unsigned int *)CORTEX_M3_MPU_TYPE_REG;

    return ((*mpu_type_reg) >> 16);
}

int cortex_m3_mpu_tr_get_dregion()
{
    unsigned int *mpu_type_reg = (unsigned int *)CORTEX_M3_MPU_TYPE_REG;

    return ((*mpu_type_reg) >> 8);
}

int cortex_m3_mpu_tr_get_separate()
{
    unsigned int *mpu_type_reg = (unsigned int *)CORTEX_M3_MPU_TYPE_REG;

    return !!((*mpu_type_reg) & 0x00000001);
}

int cortex_m3_mpu_cr_get_enable()
{
    unsigned int *mpu_cr = (unsigned int *)CORTEX_M3_MPU_CTRL_REG;

    return !!((*mpu_cr) & 0x00000001);
}

