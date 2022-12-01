CONFIG_MODULE_SIG=n
obj-m += chrdev.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
load:
	insmod chrdev.ko
	dmesg -c
unload:
	rmmod chrdev.ko
	dmesg -c
