#include "linux/printk.h"
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


extern void blan_test_cve(void);

static int __init simple_init(void)
{
    printk(KERN_INFO "CVE-2025-39940: the module loaded\n");
    blan_test_cve ();
    return 0;
}

static void __exit simple_exit(void)
{
    printk(KERN_INFO "CVE-2025-39940: module unloaded\n");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("bin.lan.cn@windriver.com");
MODULE_DESCRIPTION("Some test cases of CVE-2025-39940 in Linux-6.6.y");
