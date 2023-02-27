//Convierte una cadena de digitos hexadecimales en su valor numerico decimal equivalente

#include <stdio.h>

#define NO -1

int   hexadecimalToInt(char string[]);
short isValidHexadecimalChar(char character);


void main() {

    char string[] = "ABCDEF";

    printf("The hexadecimal number %s is equivalent to %d int value", string, hexadecimalToInt(string));

}//end-main

int hexadecimalToInt(char string[]) {
    int   index;
    int   intValue;
    short decimalValue;

    intValue = 0;

    for(index = 0; (decimalValue = isValidHexadecimalChar(string[index])) != NO; ++index)
        intValue = 16 * intValue + decimalValue;

    return intValue;   
}//end hexadecimalToInt 

short isValidHexadecimalChar(char character) {

    if(character >= '0' && character <= '9')
        return (character - '0');

    if(character >= 'a' && character <= 'f')
        return ((character - 'a') + 10);

    if(character >= 'A' && character <= 'F')
        return ((character - 'A') + 10);

    return NO;
}//end isValidHexadecimalChar

