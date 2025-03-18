#include "neslib.h"

void main(void) {
    // set palette colors
    pal_col(0, 0x02); // dark blue
    pal_col(1, 0x14); // fuchsia
    pal_col(2, 0x20); // gray
    pal_col(3, 0x30); // white

    vram_adr(NTADR_A(2, 2));
    vram_write((const unsigned char *)"HELLO, SAILOR!", 14);

    ppu_on_all();

    while (1);
}