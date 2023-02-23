/*Remplaza la cadena de uno o mas blancos por uno solo

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define SPACE ' '

void main () {
    int character;
    long countSpaces;

    countSpaces = 0;

    while ((character = getchar()) != EOF) {
        if (character == SPACE) 
            countSpaces++;
        else
            countSpaces = 0;
        
        if (countSpaces <= 1)   
            putchar(character);
    }//end-while
}//end-main