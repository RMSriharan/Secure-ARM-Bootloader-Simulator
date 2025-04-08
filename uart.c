// uart.c
#include <stdio.h>
#include "uart.h"

void uart_init() {
    // Simulated init
}

void puts(const char *s) {
    printf("%s\n", s);
}

char uart_read() {
    char c;
    scanf(" %c", &c);
    return c;
}
