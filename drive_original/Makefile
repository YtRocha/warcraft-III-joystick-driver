obj-m += hid-playstation.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean

install:
	cp hid-sony.ko /lib/modules/$(shell uname -r)/kernel/drivers/hid/
