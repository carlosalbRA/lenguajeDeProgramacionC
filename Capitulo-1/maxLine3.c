/*Lee un conjunto de lineas e imprime la de mayor longitud

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define NEW_LINE        '\n'
#define _NULL           '\0'
#define MAX_LENGTH_LINE 1000

char line[MAX_LENGTH_LINE];
char maxLine[MAX_LENGTH_LINE];
int  maxLineLength;

int  getLineLength();
void copyLine();

void main() {
    int lineLength;

    maxLineLength = 0;

    while((lineLength = getLineLength()) > 0)
        if(lineLength > maxLineLength) {
            maxLineLength = lineLength;
            copyLine();
        }
    
    if(maxLineLength > 0)
        printf("The maximum line is: %s", maxLine);

}//end-main

int getLineLength() {
    int character;
    int index;

    for(index = 0; 
        index < (MAX_LENGTH_LINE - 1)  && 
        (character = getchar()) != EOF &&
        character != NEW_LINE;
        ++index)
        line[index] = character;

    if(character == NEW_LINE) {
        line[index] = character;
        ++index;
    }

    line[index] = _NULL;

    return index;
}//end getLine

void copyLine() {
    int index;

    index = 0;

    while((maxLine[index] = line[index]) != _NULL)
        ++index;
}//end copyLine