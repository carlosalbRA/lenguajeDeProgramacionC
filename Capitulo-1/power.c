//Eleva base a la exponent potencia

#include <stdio.h>

int power(int base, int exponent);

void main() {
    int base, exponent;

    base     = 2;
    exponent = 8;

    printf("power(%d, %d) = %d\n", base, exponent, power(base, exponent));
}//end-main

int power(int base, int exponent) {
    int result;

    for(result = 1; exponent > 0; --exponent)
        result = result * base;

    return result;
}//end power