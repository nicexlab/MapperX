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
	{ 0x29911341, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x634dc2ff, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x3fe2ccbe, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x95e97d90, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xf56b6138, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0xa3e1e921, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x513e43b6, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xb0dd173b, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x4d54ad40, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x46feb099, __VMLINUX_SYMBOL_STR(dm_read_arg) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0x7cefb2e3, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x14b3a4f4, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xa7a42eb5, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x9594515d, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeb82961b, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x4b6666a, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xe1287c20, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x475c7870, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xcf1486b, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0xf62cd84, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5e93c9f3, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x98ceb0fc, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xde5a4e55, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x2a39074e, __VMLINUX_SYMBOL_STR(dm_disk) },
	{ 0x7dfb4197, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0xceacc273, __VMLINUX_SYMBOL_STR(md_update_sb) },
	{ 0x956ba0ab, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0xcfbdb281, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x7c922190, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x124af3bf, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,raid456";


MODULE_INFO(srcversion, "FE2F17486F87D5F98DB7795");
MODULE_INFO(rhelversion, "7.3");
