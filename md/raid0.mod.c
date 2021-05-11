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
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x369be79, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xd7e65615, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xf0ada80e, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x5a4a9157, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xd2bdf59b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xea1f9d8a, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xa98189e5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xbd275110, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xf927fa22, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x5ef68d5c, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xa3d61a39, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x8f619a88, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6eb70a9, __VMLINUX_SYMBOL_STR(bio_pair_release) },
	{ 0xcd322ed4, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xafa99ab4, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "06EF086BF6FF0CDF40F391E");
MODULE_INFO(rhelversion, "7.3");
