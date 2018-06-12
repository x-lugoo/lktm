#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x9d35aeec, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8a9809d6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x36e441ca, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xdb63fede, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x51aaa76c, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xca5dbd74, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x8cc75c49, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2142697b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7a5682ba, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x8e598014, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf00f67a9, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x6f9df6d3, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x3fada7d6, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x55e8908c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x92a0081d, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D425D12FDC215B60A2C2725");
