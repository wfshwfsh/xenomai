cmd_/home/will/git/xeno/xenomai_tutorial/08_rtdm_gpio/drv/modules.order := {   echo /home/will/git/xeno/xenomai_tutorial/08_rtdm_gpio/drv/irq_gpio_rtdm.ko; :; } | awk '!x[$$0]++' - > /home/will/git/xeno/xenomai_tutorial/08_rtdm_gpio/drv/modules.order
