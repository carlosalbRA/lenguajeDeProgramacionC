/*Cuenta los caracteres leidos

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

void main() {
    long countCharacters;

    countCharacters = 0;

    while(getchar() != EOF)
        ++countCharacters;
    
    printf("Number of characters: %ld\n", countCharacters);
}//end-main