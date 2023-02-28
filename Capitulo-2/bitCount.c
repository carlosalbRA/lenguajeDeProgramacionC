//Cuenta al numero de bits 1 en un argumento entero

#include <stdio.h>

int bitCount(unsigned value);

void main() {
    unsigned value;

    value = 255;

    printf("bitCount(%u) = %d\n", value, bitCount(value));
    
}//end-main

int bitCount(unsigned value) {
    int count;

    for (count = 0; value != 0; value >>= 1)
        if(value & 01)
            count++;    
    
    return count;
}//end bitCount