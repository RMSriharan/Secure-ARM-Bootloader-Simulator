#include "sha256.h"
#include "flash.h"
#include "uart.h"

void bootloader_menu() {
    puts("== Bootloader Menu ==");
    puts("1. Verify Kernel Image (SHA-256)");
    puts("2. Load Kernel Image");
    puts("3. Enter Update Mode");
    puts("4. Reboot");
    puts("Enter option: ");
}

int main() {
    uart_init();

    while (1) {
        bootloader_menu();
        char opt = uart_read();
        if (opt == '1') {
            puts("Verifying kernel...\n");
            verify_sha256("kernel.img");
        } else if (opt == '2') {
            puts("Loading kernel...\n");
            load_kernel("kernel.img");
        } else if (opt == '3') {
            puts("Entering update mode...\n");
            update_flash("kernel.img");
        } else if (opt == '4') {
            puts("Rebooting...\n");
            break;
        }
    }
    return 0;
}
