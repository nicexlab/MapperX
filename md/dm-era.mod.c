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
	{ 0x827a42f4, __VMLINUX_SYMBOL_STR(dm_tm_open_with_sm) },
	{ 0x40f7bd91, __VMLINUX_SYMBOL_STR(dm_tm_inc) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x48e323be, __VMLINUX_SYMBOL_STR(dm_bm_unlock) },
	{ 0xed1e1f96, __VMLINUX_SYMBOL_STR(dm_btree_remove) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x513e43b6, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x24fa6664, __VMLINUX_SYMBOL_STR(dm_bitset_set_bit) },
	{ 0x7c922190, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x688d422d, __VMLINUX_SYMBOL_STR(dm_bm_block_size) },
	{ 0x88295b96, __VMLINUX_SYMBOL_STR(dm_tm_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x634dc2ff, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x124af3bf, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xd163cade, __VMLINUX_SYMBOL_STR(dm_tm_commit) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x5aed1dd7, __VMLINUX_SYMBOL_STR(dm_bitset_flush) },
	{ 0xaee02382, __VMLINUX_SYMBOL_STR(dm_btree_empty) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xffff2ac3, __VMLINUX_SYMBOL_STR(dm_bitset_resize) },
	{ 0x832bf228, __VMLINUX_SYMBOL_STR(dm_array_del) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7cefb2e3, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x17c36f29, __VMLINUX_SYMBOL_STR(dm_bm_checksum) },
	{ 0xba47c03a, __VMLINUX_SYMBOL_STR(dm_bitset_del) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x72289260, __VMLINUX_SYMBOL_STR(dm_block_manager_destroy) },
	{ 0xed58cfa1, __VMLINUX_SYMBOL_STR(dm_bitset_empty) },
	{ 0x29911341, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x4360913e, __VMLINUX_SYMBOL_STR(dm_btree_find_lowest_key) },
	{ 0x32b5f546, __VMLINUX_SYMBOL_STR(dm_array_empty) },
	{ 0xf375d009, __VMLINUX_SYMBOL_STR(dm_bm_write_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x194fd0c2, __VMLINUX_SYMBOL_STR(mark_tech_preview) },
	{ 0xab96bd2d, __VMLINUX_SYMBOL_STR(dm_bitset_test_bit) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x858c8d94, __VMLINUX_SYMBOL_STR(dm_array_set_value) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x7ade1071, __VMLINUX_SYMBOL_STR(dm_tm_destroy) },
	{ 0x966a8838, __VMLINUX_SYMBOL_STR(dm_btree_lookup) },
	{ 0xf12ec3cd, __VMLINUX_SYMBOL_STR(dm_disk_bitset_init) },
	{ 0xafeda29f, __VMLINUX_SYMBOL_STR(dm_bm_write_lock_zero) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xa87c5b4d, __VMLINUX_SYMBOL_STR(dm_array_resize) },
	{ 0x55b4bd4d, __VMLINUX_SYMBOL_STR(dm_tm_create_with_sm) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf5455120, __VMLINUX_SYMBOL_STR(dm_bm_read_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x54f69d, __VMLINUX_SYMBOL_STR(dm_tm_pre_commit) },
	{ 0x2c112836, __VMLINUX_SYMBOL_STR(dm_block_location) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd29923fb, __VMLINUX_SYMBOL_STR(dm_tm_shadow_block) },
	{ 0xbd50ebbb, __VMLINUX_SYMBOL_STR(dm_btree_del) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x71d71cd0, __VMLINUX_SYMBOL_STR(dm_block_manager_create) },
	{ 0x4b6666a, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x1e3f728d, __VMLINUX_SYMBOL_STR(dm_block_data) },
	{ 0x42dbdfc3, __VMLINUX_SYMBOL_STR(dm_tm_read_lock) },
	{ 0x2025e954, __VMLINUX_SYMBOL_STR(dm_array_info_init) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xca40abd5, __VMLINUX_SYMBOL_STR(dm_btree_insert) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-persistent-data,dm-mod";


MODULE_INFO(srcversion, "B9D464E0A36CB3581DFA030");
MODULE_INFO(rhelversion, "7.3");
