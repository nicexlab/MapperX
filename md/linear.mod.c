#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x369be79, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xd7e65615, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xf0ada80e, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xa3d61a39, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xde5a4e55, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xcf1486b, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x5a4a9157, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x475c7870, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xd2bdf59b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf6eb70a9, __VMLINUX_SYMBOL_STR(bio_pair_release) },
	{ 0xcd322ed4, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xafa99ab4, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8f619a88, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E23E0A1A74F5EC4D4BE6945");
MODULE_INFO(rhelversion, "7.3");
