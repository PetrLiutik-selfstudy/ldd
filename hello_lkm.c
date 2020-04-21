#include <linux/module.h>

static int x = 0;

static int __init insert_hello(void)
{
  x++;
  printk(KERN_INFO "Hello world!!!, %d\n", x);
  return 0;
}

static void __exit remove_hello(void)
{
  printk(KERN_DEBUG "Bay world!!!\n");
}

module_init(insert_hello);
module_exit(remove_hello);

MODULE_LICENSE("GPL");

