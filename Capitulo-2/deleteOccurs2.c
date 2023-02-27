//Borra todas las ocurrencias de un caracter

#include <stdio.h>

#define _NULL '\0'
#define TRUE   1
#define FALSE  0

void deleteOccurs(char string[], char charList[]);
short charInString(char charList[], char character);

void main() {

    char string[]   = "Example of a function that deletes the occurrences of a character within a character string";
    char charList[] = "aeiou";

    printf("The string is: %s\n", string);
    printf("The character list to delete is: %s\n", charList);

    deleteOccurs(string, charList);

    printf("The resul is: %s", string);

}//end-main

void deleteOccurs(char string[], char charList[]) {
    int index;
    int baseIndex;

    for(index = baseIndex = 0; string[index] != _NULL; index++)
        if(charInString(charList, string[index]) == FALSE)
            string[baseIndex++] = string[index];
    
    string[baseIndex] = _NULL;
    
}//end deleteOccurs 

short charInString(char charList[], char character) {
    int index;

    for(index = 0; charList[index] != _NULL; index++)
        if(charList[index] == character)
            return TRUE;
    
    return FALSE;
    
}//end charInString 