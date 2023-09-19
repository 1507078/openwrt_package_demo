#include <linux/module.h>
#include <linux/version.h>
#include <linux/kmod.h>
#include <linux/input.h>

MODULE_LICENSE("GPL");       // Module license (required for some kernel versions)

static int __init demo_init(void) {
    printk(KERN_INFO "Hello, Kernel!\n");  // Log a message to the kernel log
    return 0;  // Return 0 to indicate success
}

static void __exit demo_exit(void) {
    printk(KERN_INFO "Goodbye, Kernel!\n");
}

// Register the module's initialization and exit functions
module_init(demo_init);
module_exit(demo_exit);
