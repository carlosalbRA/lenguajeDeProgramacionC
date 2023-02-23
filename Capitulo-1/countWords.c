/*Cuenta lineas, palabras y caracteres

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
    long  countCharacters;
    long  countLines;
    long  countWords;
    
    countCharacters  = 0;
    countLines       = 0;
    countWords       = 0;

    isInWord = NO;

    while((character = getchar()) != EOF) {

        countCharacters++;

        if (character == NEW_LINE)
            countLines++;
        
        if (character == NEW_LINE ||
            character == SPACE    ||
            character == TAB) 
               isInWord = NO;
        else if (isInWord == NO) {
            countWords++;
            isInWord = YES;
        }//end-if
    }//end-while
    
    printf("Number of Characters: %ld\n", countCharacters);
    printf("Number of Words: %ld\n",      countWords);
    printf("Number of Lines: %ld\n",      countLines);
}//end-main