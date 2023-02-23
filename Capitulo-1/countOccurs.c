/*Cuenta las ocurrencias de cada digito, espacio blanco, y de los restantes caracteres

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define SPACE       ' '
#define TAB         '\t'
#define NEW_LINE    '\n'
#define LIMIT_DIGIT 10

void main() {

    short index;
    int character;
    int countBlanks;
    int countOthers;
    int countDigit[LIMIT_DIGIT];
    
    countBlanks = 0;
    countOthers   = 0;

    for (index = 0; index < LIMIT_DIGIT; index++)
        countDigit[index] = 0;    
    
    while((character = getchar()) != EOF)
        if (character >= '0' && character <= '9')
            ++countDigit[character - '0']; // Ejemplo: '1' - '0' = 49 - 48 = 1 (indice)

        else if (character == SPACE ||
                 character == TAB   ||
                 character == NEW_LINE)
            ++countBlanks;

        else
            ++countOthers;

    for (index = 0; index < LIMIT_DIGIT; index++)
        printf("Number of Digits [%d]: %d\n", index, countDigit[index]);

    printf("Number of Blanks: %d\nNumber of Others: %d\n", countBlanks, countOthers);

}//end-main