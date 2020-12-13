#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
static char *name = "developer";
static int __init name_init(void)
{
printk("hello world!\n");
printk("hello %s!\n",name);
return 0;
}

static void __exit name_exit(void)
{
printk(KERN_INFO"NAME MODULE EXIT\n");
}

module_init(name_init);
module_exit(name_exit);
module_param(name,charp,S_IRUGO);
