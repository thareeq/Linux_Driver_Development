#include <linux/module.h>
#include <linux/init.h>

int my_fun_init(void)
{
	printk("Hello Kernel\n");
	return 0;
}

void my_fun_exit(void)
{
	printk("Goodbye Kernel\n");
}

module_init(my_fun_init);
module_exit(my_fun_exit);

MODULE_LICENSE("GPL");


