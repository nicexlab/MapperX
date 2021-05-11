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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x369be79, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xd7e65615, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xafa99ab4, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xf6eb70a9, __VMLINUX_SYMBOL_STR(bio_pair_release) },
	{ 0xcd322ed4, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x29ac5a6, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x1b82fefa, __VMLINUX_SYMBOL_STR(md_unplug) },
	{ 0xa2c5f45f, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0xe16e669e, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xa2390892, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xd7f99c, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x223c062b, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x9a827581, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x3a24d2bc, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x513e034c, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0x4c0504ad, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xaa65ea8e, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x668f50bc, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x1800dae, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x2467e4ce, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x4554b079, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x60f6a84, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x42d9a528, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xaf8f0427, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xea1f9d8a, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xa98189e5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xf927fa22, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xbd275110, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x533a4987, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb843992a, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6ccf1eae, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x7aa47913, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2bdf59b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x53e1d633, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x30f60afc, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x95e97d90, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x48016aa6, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x14b3a4f4, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x10e74b6d, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xf0ada80e, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x523399e6, __VMLINUX_SYMBOL_STR(sysfs_notify_dirent) },
	{ 0xadd2aceb, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x6d849ca0, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xeb862489, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x98ceb0fc, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xde5a4e55, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x5a4a9157, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x867c68af, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x8f619a88, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc1c79cc9, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xcfbdb281, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x5d3d44a9, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x742abf45, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6213A40DA74F272BF6CC898");
MODULE_INFO(rhelversion, "7.3");
