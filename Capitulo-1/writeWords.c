/*Escribe las palabras que lea (una en cada linea)

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define SPACE     ' '
#define TAB       '\t'
#define NEW_LINE  '\n'
#define YES       1
#define NO        0

void main() {

    short isInWord;
    int   character;

    isInWord = NO;

    while((character = getchar()) != EOF) {
        
        if (character == NEW_LINE ||
            character == SPACE    ||
            character == TAB) {

            if (isInWord == YES)
                putchar('\n');

            isInWord = NO;
            }
        else if (isInWord == NO) {
            isInWord = YES;
            putchar(character);
        }
        else 
           putchar(character);
           
    }//end-while  
}//end-main