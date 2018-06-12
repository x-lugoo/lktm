#
# Makefile for Linux samplefs
#
obj-m += samplefs.o

samplefs-objs := super.o inode.o file.o

ALL:
	make -C /lib/modules/$(shell uname -r)/build  M=$(shell pwd) modules
