#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

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
	{ 0xd50c3b39, "hid_hw_output_report" },
	{ 0xffb7c514, "ida_free" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb942205f, "hid_hw_close" },
	{ 0xbbc0524a, "hid_hw_stop" },
	{ 0xdbc7d480, "hid_hw_raw_request" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x1512a32c, "kmalloc_caches" },
	{ 0x44e87630, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x2260e1e4, "_dev_warn" },
	{ 0xe7d7df5, "_dev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc5fe2641, "led_mc_calc_color_components" },
	{ 0x221e0632, "input_ff_create_memless" },
	{ 0xde3576f8, "hid_open_report" },
	{ 0xd007ee1d, "hid_hw_start" },
	{ 0x20a9c5c9, "hid_hw_open" },
	{ 0x3af2edc3, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa916b694, "strnlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x24838e3a, "devm_led_classdev_multicolor_register_ext" },
	{ 0x23c878a2, "input_free_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xcb0d0e42, "__hid_register_driver" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x20a6a117, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3a7d94d0, "devm_input_allocate_device" },
	{ 0x55cce41, "devm_kasprintf" },
	{ 0x194c2655, "devm_power_supply_register" },
	{ 0x40354c73, "power_supply_powers" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xef9908ba, "power_supply_get_drvdata" },
	{ 0x4c968d50, "devm_led_classdev_register_ext" },
	{ 0xc7b76fa, "hid_unregister_driver" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xad60b2af, "input_event" },
	{ 0xb3d0f32a, "input_mt_report_slot_state" },
	{ 0x59c5aee3, "input_mt_sync_frame" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x8df1916a, "input_set_capability" },
	{ 0x23796e0, "input_set_abs_params" },
	{ 0xcfcc19e5, "input_mt_init_slots" },
	{ 0xfcda5a5d, "input_register_device" },
	{ 0x48ed4bf8, "input_alloc_absinfo" },
	{ 0x21f04203, "module_layout" },
};

MODULE_INFO(depends, "hid,led-class-multicolor,ff-memless");

MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000DF2");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000DF2");

MODULE_INFO(srcversion, "6E8BC6EBADD813EF6905AE2");
