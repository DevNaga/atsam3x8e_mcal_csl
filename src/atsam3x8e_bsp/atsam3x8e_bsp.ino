
#include "BSP/sm/atsam3x8e_sm.h"
#include "BSP/PMC/atsam3x8e_pmc.h"
#include "BSP/CHIPID/atsam3x8e_chipid.h"
#include "BSP/sm/atsam3x8e_sm.c"
#include "BSP/CHIPID/atsam3x8e_chipid.c"


void setup() {
  Serial.begin(115200);  
}

void loop() {
  delay(1000);

  Serial.println("---------- Supply Monitor Specific ----------");

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

  Serial.println("-------------- PMC specifics --------------");

  Serial.print("USB OTG clock enabled ");
  int usb_otg_clk;

  PMC_SCSR_USB_OTG_CLK_GET(usb_otg_clk);
  Serial.println(usb_otg_clk);

  Serial.println("-------------- ChipID specifics ------------");

  int chip_version = chip_id_cidr_get_version();
  int chip_eproc = chip_id_cidr_get_eproc();
  int chip_nvpsiz = chip_id_cidr_get_nvpsiz();
  int chip_nvpsiz2 = chip_id_cidr_get_nvpsiz2();
  int chip_sram = chip_id_cidr_get_sram();
  int chip_arch = chip_id_cidr_get_arch();
  int chip_nvptyp = chip_id_cidr_get_nvptyp();
  int chip_ext = chip_id_cidr_get_ext();

  Serial.print("chip version ");
  Serial.println(chip_version);

  Serial.print("chip eproc ");
  Serial.println(chip_eproc);

  Serial.print("get nvpsiz ");
  Serial.println(chip_nvpsiz);

  Serial.print("get nvpsiz2 ");
  Serial.println(chip_nvpsiz2);

  Serial.print("get sram ");
  Serial.println(chip_sram);

  Serial.print("get arch ");
  Serial.println(chip_arch);

  Serial.print("get nvptyp ");
  Serial.println(chip_nvptyp);

  Serial.print("get ext ");
  Serial.println(chip_ext);
}
