#include <linux/module.h>


int init_module(void)
{
    printk( KERN_INFO "hello loading" );

int cleanup_module(void)
{
    printk( KERN_INFO "leaving" );
}


MODULE_LICENSE("GPL");
