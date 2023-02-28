//Invierte n bits

#include <stdio.h>

int power(int base, int exponent);
unsigned invertBits(unsigned value, unsigned position, unsigned numberOfBits);

void main() {
    unsigned value, position, numberOfBits;

    value        = 165;
    position     = 6;
    numberOfBits = 2;

    printf("invertBits(%u, %u, %u) = %u (DEC)\n", value, position, numberOfBits, invertBits(value, position, numberOfBits));
}//end-main

unsigned invertBits(unsigned value, unsigned position, unsigned numberOfBits) {
    unsigned MASK;
    unsigned bitsToLeft;
    unsigned bitsToDecimal;

    bitsToLeft    = position - numberOfBits + 1;
    bitsToDecimal = power(2, bitsToLeft) - 1;

    MASK = ~0 << numberOfBits;
    MASK = MASK << bitsToLeft;
    MASK = MASK | bitsToDecimal;
        
    return ( ~value ^ MASK );
}//end invertBits 

int power(int base, int exponent) {
    int result;

    for(result = 1; exponent > 0; --exponent)
        result = result * base;

    return result;
}//end power