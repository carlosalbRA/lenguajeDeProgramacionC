/*Lee un conjunto de lineas e imprime la de mayor longitud

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define NEW_LINE        '\n'
#define _NULL           '\0'
#define MAX_LENGTH_LINE  51

int  MAX_INDEX_LINE;

int  getLineLength(char line[]);
void copyLine(char originLine[], char targetLine[]);
void clearLine(char line[]);
void printResult(char initialPartLine[], char endPartLine[], int lineLength);

void main() {
    int  lineLength;
    int  lineLengthAux;
    int  maxLineLength;
    char line[MAX_LENGTH_LINE];
    char lineAux[MAX_LENGTH_LINE];
    char maxLineInitial[MAX_LENGTH_LINE];
    char maxLineEnd[MAX_LENGTH_LINE];

    clearLine(line);
    
    maxLineLength = 0;
    MAX_INDEX_LINE = MAX_LENGTH_LINE - 1;


    while((lineLength = getLineLength(line)) > 0) {

        if(lineLength == MAX_INDEX_LINE && 
           line[(MAX_INDEX_LINE - 1)] != NEW_LINE) {
            
            lineLengthAux = lineLength;
            clearLine(lineAux);

            while (lineLengthAux == MAX_INDEX_LINE &&
                   lineAux[(MAX_INDEX_LINE - 1)] != NEW_LINE) {
                lineLengthAux = getLineLength(lineAux);
                lineLength += lineLengthAux;
            }
        }

        if(lineLength > maxLineLength) {
            maxLineLength = lineLength;
            clearLine(maxLineInitial);
            clearLine(maxLineEnd);
            copyLine(line, maxLineInitial);
            copyLine(lineAux, maxLineEnd);
        }
    }

    printResult(maxLineInitial, maxLineEnd, maxLineLength);

}//end main

int getLineLength(char line[]) {
    int character;
    int index;

    for(index = 0; 
        index <= (MAX_INDEX_LINE - 1) && 
        (character = getchar()) != EOF  &&
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

void clearLine(char line[]) {

    for(int index = 0; index <= MAX_INDEX_LINE; ++index )
        line[index] = _NULL;
}//end clearLine

void printResult(char initialPartLine[], char endPartLine[], int lineLength) {

    if(lineLength > 0 && lineLength <= MAX_INDEX_LINE) {
        printf("The maximum line is: %s", initialPartLine);
        printf("The length line is: %d", (lineLength - 1));
    }
    else if(lineLength > MAX_INDEX_LINE && lineLength <= (MAX_INDEX_LINE * 2)){
        printf("The maximum line is: %s%s", initialPartLine, endPartLine);
        printf("The length line is: %d", (lineLength - 1));
    }
    else if(lineLength > (MAX_INDEX_LINE * 2) ){
        printf("The maximum line is: %s . . . %s", initialPartLine, endPartLine);
        printf("The length line is: %d", (lineLength - 1));
    }
}//end printResult