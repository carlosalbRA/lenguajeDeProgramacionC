//Longitud de una cadena

#include <stdio.h>

#define _NULL '\0'

int stringLength (char string[]);

void main() {

    char string[] = "Example of a function that calculates the length of a character string";

    printf("The string  is: %s\n", string);
    printf("The string length is: %d", stringLength(string));
}//end-main

int stringLength (char string[]) {
    int index;

    index = 0;

    while(string[index] != _NULL)
        ++index;
    
    return index;   
}//end stringLength 