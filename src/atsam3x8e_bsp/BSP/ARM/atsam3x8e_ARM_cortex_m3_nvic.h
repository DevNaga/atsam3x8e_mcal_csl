#ifndef __ATSAM3x8E_ARM_CORTEX_M3_NVIC_H__
#define __ATSAM3x8E_ARM_CORTEX_M3_NVIC_H__

// interrupt set enable registers
#define CORTEX_M3_ISER0_ISER1_REGION_START 0xE000E100

// interrupt clear enable registers
#define CORTEX_M3_ICER0_ICER1_REGION_START 0xE000E180

// interrupt set pending registers
#define CORTEX_M3_ISPR0_ISPR1_REGION_START 0xE000E200

// interrupt clear pending registers
#define CORTEX_M3_ICPR0_ICPR1_REGION_START 0xE000E280

// interrupt active bit registers
#define CORTEX_M3_IABR0_IABR1_REGION_START 0xE000E300

// interrupt priority registers
#define CORTEX_M3_IPR0_IPR7_REGION_START 0xE000E400

// interrupt priority registers
#define CORTEX_M3_IPR0_IPR7_REGION_STOP 0xE000E41C

// software trigger interrupt register
#define CORTEX_M3_STIR 0xE000EF00

#endif

