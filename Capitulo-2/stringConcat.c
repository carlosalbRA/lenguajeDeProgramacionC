//Concatenar 2 cadenas de caracteres

#include <stdio.h>

#define _NULL       '\0'
#define MAX_LENGTH  1001

void stringConcat(char baseString[], char addString[]);

void main() {
    char baseString[MAX_LENGTH] = "This is the base string";
    char addString[]  = ">This is the extra string";

    printf("%s\n", baseString);
    printf("%s\n", addString);

    stringConcat(baseString, addString);

    printf("The resul is: %s", baseString);

}//end-main

void stringConcat(char baseString[], char addString[]) {
    int baseIndex;
    int extraIndex;

    baseIndex = extraIndex = 0;

    while(baseString[baseIndex] != _NULL)
        baseIndex++;
    
    while((baseString[baseIndex++] = addString[extraIndex++]) != _NULL);
        
}//end stringConcat 