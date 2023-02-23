/*Escribe una fincion reverse(s) que invierta la cadena de caracteres s. Utilizala para escribir un 
programa que invierta la entrada linea a linea.

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define NEW_LINE   '\n'
#define _NULL      '\0'
#define MAX_LENGTH 1001

void reverseLine(char line[]);

void main() {
    int  character;
    int  index;
    char line[MAX_LENGTH];

    for(index = 0; index < (MAX_LENGTH - 1) && (character = getchar()) != EOF; ++index) {
        line[index] = character;

        if (character == NEW_LINE) {
            reverseLine(line);
            
            if (index > 0) {
                line[(index+1)] = _NULL;
                printf(line);
            }
            
            index = -1;
        }
    }

    if (index == (MAX_LENGTH - 1)) {
        line[index] = _NULL;
        reverseLine(line);
        printf(line);
    }


}//end-main

void reverseLine (char line[]) {
    int  startIndex;
    int  endIndex;
    char characterTemp;

    startIndex = 0;
    endIndex = 0;

    while (line[endIndex] != NEW_LINE && line[endIndex] != _NULL)
        endIndex++;
    
    endIndex--;
    
    while (startIndex < endIndex) {
        characterTemp      = line[startIndex];
        line[startIndex++] = line[endIndex];
        line[endIndex--]   = characterTemp;
    } 
    
}//end reverseLine