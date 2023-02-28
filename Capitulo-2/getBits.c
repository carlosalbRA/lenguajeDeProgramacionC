//Devuelve un conjunto de bits a partir de una posicion

#include <stdio.h>

unsigned getBits(unsigned value, unsigned position, unsigned numberOfBits);

void main() {
    unsigned value, position, numberOfBits;

    value        = 28;
    position     = 4;
    numberOfBits = 3;

    printf("getBits(%d, %d, %d) = %d (DEC)\n", value, position, numberOfBits, getBits(value, position, numberOfBits));
}//end-main

unsigned getBits(unsigned value, unsigned position, unsigned numberOfBits) {
    
    return ((value >> (position + 1 - numberOfBits)) & ~(~0 << numberOfBits));
}//end getBits 