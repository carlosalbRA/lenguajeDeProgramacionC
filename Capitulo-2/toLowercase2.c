/*Convierte las letras de entrada MAYUSCULAS a minusculas

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

int toLowercase(int character);

void main() {
    int character;

    while((character = getchar()) != EOF)
        putchar(toLowercase(character));
}//end-main

int toLowercase (int character) {
    return ( (character >= 'A' && character <= 'Z') ? (character + 32) : character );
}//end toLowercase