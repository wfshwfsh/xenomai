CROSS_COMPILE=aarch64-linux-gnu-
ARCH=arm64
#CROSS_COMPILE=arm-linux-gnueabihf-
#ARCH=arm

# 1. 使用不同的开发板内核时, 一定要修改KERN_DIR
# 2. KERN_DIR中的内核要事先配置、编译, 为了能编译内核, 要先设置下列环境变量:
# 2.1 ARCH,          比如: export ARCH=arm64
# 2.2 CROSS_COMPILE, 比如: export CROSS_COMPILE=aarch64-linux-gnu-
# 2.3 PATH,          比如: export PATH=$PATH:/home/book/100ask_roc-rk3399-pc/ToolChain-6.3.1/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin 
# 注意: 不同的开发板不同的编译器上述3个环境变量不一定相同,
#       请参考各开发板的高级用户使用手册

#KERN_DIR = /home/will/git/rpi-linux
KERN_DIR = /home/adv/git/rpi-linux

all:
	ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) make -C $(KERN_DIR) M=`pwd` modules 
	$(CROSS_COMPILE)gcc -o spi_oled spi_oled.c

clean:
	ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) make -C $(KERN_DIR) M=`pwd` modules clean
	rm -rf modules.order spi_oled

MODULE = oled_drv
obj-m	+= $(MODULE).o

