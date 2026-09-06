#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__fentry__" },
	{ 0x284ba69e, "rtw89_usb_probe" },
	{ 0x645ed827, "usb_deregister" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xb8ebc276, "rtw89_usb_disconnect" },
	{ 0x4d97fe2f, "rtw8852a_chip_info" },
	{ 0x3fc0ae15, "usb_register_driver" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0x284ba69e,
	0x645ed827,
	0xd272d446,
	0xb8ebc276,
	0x4d97fe2f,
	0x3fc0ae15,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__fentry__\0"
	"rtw89_usb_probe\0"
	"usb_deregister\0"
	"__x86_return_thunk\0"
	"rtw89_usb_disconnect\0"
	"rtw8852a_chip_info\0"
	"usb_register_driver\0"
	"module_layout\0"
;

MODULE_INFO(depends, "rtw89_usb,rtw89_8852a");

MODULE_ALIAS("usb:v0411p0312d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v056Ep4020d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p1997d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8832d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp885Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp885Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3321d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3323d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p332Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p013Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0140d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0141d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C4Ep0124d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v3625p010Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v3625p010Fd*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "C72585F6A9BA00ED71BC83A");
