/*Encuentra la primer posicion de una cadena de caracteres en que aparezca cualquier carácter 
de otra cadena de caracteres*/

#include <stdio.h>

#define _NULL     '\0'
#define NOT_FOUND -1
#define TRUE      1
#define FALSE     0

short findFirstIndex(char string[], char charList[]);
short charInString(char charList[], char character);

void main() {

    char string[]   = "Example of a function that finds the first position in which any character appeared";
    char charList[] = "aeiou";
    short indexFound;

    printf("The string is: %s\n", string);
    printf("The character list to find is: %s\n", charList);

    indexFound = findFirstIndex(string, charList);

    if (indexFound == NOT_FOUND)
        printf("The resul is: NOT FOUND\n");
    else
        printf("The first position found is: %d\n", (indexFound + 1));

}//end-main

short findFirstIndex(char string[], char charList[]) {
    int index;

    for(index = 0; string[index] != _NULL; index++)
        if(charInString(charList, string[index]) == TRUE)
            return index;
    
    return NOT_FOUND;
    
}//end findFirstIndex 

short charInString(char charList[], char character) {
    int index;

    for(index = 0; charList[index] != _NULL; index++)
        if(character == charList[index])
            return TRUE;
    
    return FALSE;
    
}//end charInString 