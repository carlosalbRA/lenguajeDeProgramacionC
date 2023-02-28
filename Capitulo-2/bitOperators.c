//Operadores logicos para el manejo de bits

#include <stdio.h>

void main() {
    int MASK, x, y;
    MASK = 15;
    x    = 1;
    y    = 2;

    printf("1111_1111 & 0111_1111 = %d (DEC)\n", (255 & 0177));
    printf("1111_0000 | 0000_1111 = %d (DEC)\n", (240 | MASK));
    printf("0000_0001 | 0000_0010 = %d (DEC)\n", (x & y));
    printf("0000_0001 << 2 = %d (DEC)\n", (x << 2));
    printf("0000_0010 >> 1 = %d (DEC)\n", (y >> 1));
    printf("~0 = %d (DEC)\n", (~0));
    printf("1111_1111 & ~(0011_1111) = %d (DEC)\n", (255 & ~077));
    
}//end-main