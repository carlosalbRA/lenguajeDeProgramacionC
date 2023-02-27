//Borra todas las ocurrencias de un caracter

#include <stdio.h>

#define _NULL '\0'

void deleteOccurs(char string[], char character);

void main() {

    char string[]  = "Example of a function that deletes the occurrences of a character within a character string";
    char character = 'e';

    printf("The string is: %s\n", string);
    printf("The character to delete is: %c\n", character);

    deleteOccurs(string, character);

    printf("The resul is: %s", string);

}//end-main

void deleteOccurs(char string[], char character) {
    int index;
    int baseIndex;

    for(index = baseIndex = 0; string[index] != _NULL; index++)
        if(string[index] != character)
            string[baseIndex++] = string[index];
    
    string[baseIndex] = _NULL;
    
}//end deleteOccurs 