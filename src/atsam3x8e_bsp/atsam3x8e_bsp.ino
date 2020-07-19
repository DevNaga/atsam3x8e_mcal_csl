
#include "sm/atsam3x8e_sm.h"
#include "sm/atsam3x8e_sm.c"


void setup() {
  Serial.begin(115200);  
}

void loop() {
  delay(1000);
  Serial.print("supply threshold ");
  Serial.println(supply_monitor_get_smth_str());
  supply_monitor_set_smsmpl(SUPPLY_MONITOR_SMSMPL_CONT_SUPPLY_MONITOR);
  Serial.print("supply monitor sampling period ");
  Serial.println(supply_monitor_get_smsmpl());
  Serial.print("supply monitor reset enabled ");
  Serial.println(supply_monitor_get_reset_enable());
  Serial.print("supply monitor interrupt enabled ");
  Serial.println(supply_monitor_get_interrupt_enable());
  Serial.print("supply controller voltmon enabled ");
  Serial.println(supply_controller_get_volt_reg_enable());
  Serial.print("supply controller pw key ");
  Serial.println(supply_controller_get_pw_key());
}
