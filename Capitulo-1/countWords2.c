/*Cuenta palabras que comiencen solo con letras (en una secuencia de digitos, letras y apostrofos)

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define SPACE      ' '
#define TAB        '\t'
#define NEW_LINE   '\n'
#define APOSTROPHE '\''
#define YES        1
#define NO         0

void main() {

    short isInWord;
    short firstIsLetter;
    short isValidSequence;
    int   character;
    long  countWords;   

    countWords = 0;

    isInWord        = NO;
    firstIsLetter   = NO;
    isValidSequence = NO;

    while((character = getchar()) != EOF) {
        
        if (character == NEW_LINE ||
            character == SPACE    ||
            character == TAB) {

                if (isInWord        == YES && 
                    firstIsLetter   == YES && 
                    isValidSequence == YES)
                    countWords++;

                isInWord        = NO;
                firstIsLetter   = NO;
                isValidSequence = NO;
        }
        else if (isInWord == NO) {
            isInWord = YES;
            if (character >= 'a' && character <= 'z' ||
                character >= 'A' && character <= 'Z') {
                firstIsLetter   = YES;
                isValidSequence = YES;
            }
        }
        else if (firstIsLetter == YES && isValidSequence == YES) {
            if (character >= 'a' && character <= 'z' ||
                character >= 'A' && character <= 'Z' ||
                character >= '0' && character <= '9' ||
                character == APOSTROPHE)

                isValidSequence = YES;
            else
                isValidSequence = NO;
        }
    }//end-while
    
    printf("Number of Words: %ld\n", countWords);

}//end-main