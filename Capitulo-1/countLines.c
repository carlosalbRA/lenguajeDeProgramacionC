/*Cuenta las lineas leidas

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

void main() {

    int  character;
    long countLines;

    countLines = 0;

    while((character = getchar()) != EOF)
        if(character == '\n')
            ++countLines;
    
    printf("Number of lines: %ld\n", countLines);
}//end-main