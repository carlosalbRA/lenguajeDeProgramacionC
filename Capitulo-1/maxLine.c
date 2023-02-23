/*Lee un conjunto de lineas e imprime la de mayor longitud

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define NEW_LINE        '\n'
#define _NULL           '\0'
#define MAX_LENGTH_LINE 1000

int  getLineLength(char line[]);
void copyLine(char originLine[], char targetLine[]);

void main() {
    int lineLength;
    int maxLineLength;
    char line[MAX_LENGTH_LINE];
    char maxLine[MAX_LENGTH_LINE];

    maxLineLength = 0;


    while((lineLength = getLineLength(line)) > 0)
        if(lineLength > maxLineLength) {
            maxLineLength = lineLength;
            copyLine(line, maxLine);
        }
    
    if(maxLineLength > 0)
        printf("The maximum line is: %s", maxLine);

}//end-main

int getLineLength(char line[]) {
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

void copyLine(char originLine[], char targetLine[]) {
    int index;

    index = 0;

    while((targetLine[index] = originLine[index]) != _NULL)
        ++index;
}//end copyLine