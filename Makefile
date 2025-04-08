CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m3 -mthumb -nostdlib -Wall
LDFLAGS = -T linker.ld

OBJS = main.o sha256.o flash.o uart.o

all: r.elf

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

r.elf: $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f *.o r.elf
