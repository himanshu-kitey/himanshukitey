#include <linux/init.h>
#include <linux/module.h>

// Initialization function
static int __init hello_init(void)
{
    printk(KERN_INFO "Hello Kernel Space.\n");
    return 0;
}

// Exit function
static void __exit hello_exit(void)
{
    printk(KERN_INFO "Bye Kernel Space.\n");
}

// Correct macros
module_init(hello_init);
module_exit(hello_exit);

// Correct macro for license
MODULE_LICENSE("GPL");

