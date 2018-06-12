#
# Makefile for Linux sampleblk
#
obj-m += sampleblk.o

sampleblk-objs := sample_blk.o
KERNELDIR:=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)
all:
	        make -C $(KERNELDIR) M=$(PWD) modules

