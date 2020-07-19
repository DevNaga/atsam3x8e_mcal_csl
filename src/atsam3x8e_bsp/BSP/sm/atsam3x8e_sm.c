/**
 * 
 * @brief - implements SM
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#include "atsam3x8e_sm.h"

static struct supply_mon_threshold {
  const char *volt;
  int val;
} supply_mon_thr[] = {
  {"1_9V", SMTH_1_9V},
};

int supply_monitor_get_smth()
{
  unsigned int *supc_smmr = (unsigned int *)SUPC_SMMR;

  return (*supc_smmr) & 0x0000000F;
}

const char *supply_monitor_get_smth_str() {
  int val = supply_monitor_get_smth();

  return supply_mon_thr[val].volt;
}

int supply_monitor_get_smsmpl()
{
  unsigned int *supc_smmr = (unsigned int *)SUPC_SMMR;

  return ((*supc_smmr) & 0x00000700) >> 8;
}

int supply_monitor_set_smsmpl(int smsmpl)
{
  unsigned int *supc_smmr = (unsigned int *)SUPC_SMMR;

  *supc_smmr |= (smsmpl << 8);

  return 0;
}

int supply_monitor_get_reset_enable()
{
  unsigned int *supc_smmr = (unsigned int *)SUPC_SMMR;
  
  return !!((*supc_smmr) & 0x00001000);
}

int supply_monitor_get_interrupt_enable()
{
  unsigned int *supc_smmr = (unsigned int *)SUPC_SMMR;

  return !!((*supc_smmr) & 0x00002000);
}

int supply_controller_get_volt_reg_enable()
{
  unsigned int *supc_mr = (unsigned int *)SUPC_MR;

  return !!((*supc_mr) & 0x00004000);
}

int supply_controller_get_pw_key()
{
  unsigned int *supc_mr = (unsigned int *)SUPC_MR;

  return (*(supc_mr) & 0xFF000000) >> 24;
}
