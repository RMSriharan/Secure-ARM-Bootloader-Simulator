# Secure ARM Bootloader Emulator

A simulated ARM Cortex-M3 bootloader using QEMU and `arm-none-eabi-gcc` that:
- Verifies kernel image using SHA-256
- Loads kernel image into memory (simulated)
- Supports UART CLI for control
- Emulates flash update without hardware

## Features
- Bare-metal C with custom linker
- Fully QEMU runnable — no real board required

## Run
```bash
make
qemu-system-arm -M lm3s6965evb -nographic -kernel r.elf
