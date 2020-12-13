obj-m:=module2.o
CURRENT_PATH:=/root/module
LINUX_KERNEL_PATH:=/usr/src/kernels/3.10.0-1160.6.1.el7.x86_64
all:
	make -C $(LINUX_KERNEL_PATH) M=$(CURRENT_PATH) modules
clean:
	make -C $(LINUX_KERNEL_PATH) M=$(CURRENT_PATH) clean
