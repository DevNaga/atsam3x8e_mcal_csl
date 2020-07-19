#include "atsam3x8e_adc.h"

int adc_get_temp_sens_on()
{
    unsigned int *adc_acr = (unsigned int *)ADC_ACR;

    return !!(((*adc_acr) & 0x00000010) >> 4);
}

