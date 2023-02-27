//Convierte una cadena de digitos en su valor numerico equivalente

#include <stdio.h>

int asciiToInt(char string[]);

void main() {

    char string[] = "002023";

    printf("The string \"%s\" is equivalent to %d int value", string, asciiToInt(string));

}//end-main

int asciiToInt(char string[]) {
    int index;
    int intValue;

    intValue = 0;

    for(index = 0; string[index] >= '0' && string[index] <= '9'; ++index)
        intValue = 10 * intValue + string[index] - '0';

    return intValue;   
}//end asciiToInt 