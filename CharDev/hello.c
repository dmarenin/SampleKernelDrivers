#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* For KERN_INFO */

int __init hello_init(void)
{
        printk(KERN_INFO "Hello, world!\n");

        return 0;
}

void __exit hello_exit(void)
{
        printk(KERN_INFO "Goodbye, world!\n");

        return;
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_DESCRIPTION("My \"Hello, World!\" module");
MODULE_AUTHOR("Stan Drozd <drozdziak1@gmail.com>");
MODULE_LICENSE("GPL");