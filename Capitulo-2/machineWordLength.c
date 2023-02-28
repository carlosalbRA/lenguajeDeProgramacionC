//Calcula la longitud de la palabra de la maquina

#include <stdio.h>

short machineWordLength();

void main() {

    printf("The word length (int) on this machine is = %d bits\n", machineWordLength());
}//end-main

short machineWordLength() {
    unsigned value;
    short    bitCount;
    
    value    = ~0;
    bitCount = 0;

    while (value > 0) {
        bitCount++;
        value >>= 1;
    }

    return bitCount;
}//end machineWordLength