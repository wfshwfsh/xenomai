cmd_/home/will/git/xeno/xenomai_tutorial/rpi/13_spi_dac_oled/oled/Module.symvers := sed 's/ko$$/o/' /home/will/git/xeno/xenomai_tutorial/rpi/13_spi_dac_oled/oled/modules.order | scripts/mod/modpost -m -a   -o /home/will/git/xeno/xenomai_tutorial/rpi/13_spi_dac_oled/oled/Module.symvers -e -i Module.symvers   -T -