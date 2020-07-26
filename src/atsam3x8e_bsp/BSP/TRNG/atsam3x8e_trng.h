/**
 * @brief - implements header file for TRNG module
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3x8e_TRNG_H__
#define __ATSAM3x8e_TRNG_H__

void TRNG_Enable();

void TRNG_Enable_Interrupts();

int TRNG_Check_Interrupt();

void TRNG_Disable_Interrupts();

int TRNG_Get_Data_u32(unsigned int *data);

#endif

