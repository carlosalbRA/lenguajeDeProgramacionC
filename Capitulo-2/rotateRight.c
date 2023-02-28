//Gira un entero hacia la derecha

#include <stdio.h>

unsigned rotateRight(unsigned value, unsigned numberBits);

void main() {
    unsigned value;
    unsigned numberBits;

    value      = 1;
    numberBits = 25;

    printf("rotateRight(%u, %u) = %u\n", value, numberBits, rotateRight(value, numberBits));
}//end-main

unsigned rotateRight(unsigned value, unsigned numberBits) {
    unsigned lastBit;
        
    lastBit  = ~(((unsigned) ~0) / 2);

    while(numberBits-- > 0) {
        if((value & 1) == 1) {
            value >>= 1;
            value |= lastBit;
        }
        else
            value >>= 1;  
    }

    return value;
}//end rotateRight