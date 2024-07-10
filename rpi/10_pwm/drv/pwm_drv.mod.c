#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd153cc49, "module_layout" },
	{ 0x3ed08d23, "pwm_free" },
	{ 0xf517ffc3, "misc_deregister" },
	{ 0xd4eda2b, "misc_register" },
	{ 0xc5850110, "printk" },
	{ 0x190831cd, "pwm_request" },
	{ 0x9f49dcc4, "__stack_chk_fail" },
	{ 0x24cd3e6e, "pwm_apply_state" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E789ABCE1A0FCE0DD7F38FF");
