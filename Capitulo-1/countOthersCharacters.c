/*Cuenta blancos, tabuladores y nueva linea

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define SPACE     ' '
#define TAB       '\t'
#define NEW_LINE  '\n'

void main() {

    int  character;
    long countSpaces;
    long countTabs;
    long countLines;
    
    countSpaces = 0;
    countTabs   = 0;
    countLines  = 0;

    while((character = getchar()) != EOF) {
        switch(character) {
            case SPACE:
                countSpaces++;
            break;
            case TAB:
                countTabs++;
            break;
            case NEW_LINE:
                countLines++;
            break;
        }//end-switch    
    }//end-while
    
    printf("Number of Spaces: %ld\n", countSpaces);
    printf("Number of Tabs: %ld\n", countTabs);
    printf("Number of Lines: %ld\n", countLines);
}//end-main