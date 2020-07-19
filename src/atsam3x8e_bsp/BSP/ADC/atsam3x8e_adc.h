/**
 * 
 * @brief - implement ADC definitions
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3x8E_ADC_H__
#define __ATSAM3x8E_ADC_H__

// ADC analog control register
#define ADC_ACR 0x400C0094

// get temperature sensor enabled or not
int adc_get_temp_sens_on();

#endif

