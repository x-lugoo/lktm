#
# Makefile for Linux sampleblk
#
obj-m += nmi.o

nmi-objs := sample_nmi.o
KERNELDIR:=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)
all:
	make -C $(KERNELDIR) M=$(PWD) modules

