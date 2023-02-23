/*Remplazar Tabs y Backspaces

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define TAB        '\t'
#define BACKSAPCE  '\b'

void main() {

    int  character;

    while((character = getchar()) != EOF) {
        switch(character) {
            case TAB:
                putchar('-');
                putchar('>');
            break;
            case BACKSAPCE:
                putchar('<');
                putchar('-');
            break;
            default:
                putchar(character);
            break;
        }//end-switch    
    }//end-while
}//end-main
