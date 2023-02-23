/*Imprimir todas las lineas que tengan mas de 80 caracteres de longitud

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define NEW_LINE        '\n'
#define _NULL           '\0'
#define MAX_LENGTH      1001
#define MAX_CHARACTERS  80

int searchLines(char buffer[], char foundLines[]);
int getLine(char buffer[], int startIndex);
int copyLine(char buffer[],
             int originStartIndex,
             int originlineLegth,
             char foundLines[],
             int targetStartIndex);

void main() {
    int  lineLength;
    char input[MAX_LENGTH];
    char foundLines[MAX_LENGTH];
    int linesCounter;

    int character;
    int index;

    for(index = 0; index < (MAX_LENGTH - 1) && (character = getchar()) != EOF; ++index)
        input[index] = character;

    input[index] = _NULL;

    linesCounter = searchLines(input, foundLines);
   
    if (linesCounter > 0)
        printf("The lines longer that %d characters are (%d):\n%s", MAX_CHARACTERS, linesCounter, foundLines);  
    else
        printf("The lines longer that %d characters are: 0", MAX_CHARACTERS);          
}//end main

int searchLines(char buffer[], char foundLines[]) {
    int index;
    int targetStartIndex;
    int linesCounter;
    int lineLegth;

    linesCounter = 0;
    index = 0;
    targetStartIndex = 0;

    while(index <= (MAX_LENGTH - 1) && buffer[index] != _NULL) {
        lineLegth = getLine(buffer, index);

        if((lineLegth - 1) > MAX_CHARACTERS) {

            targetStartIndex = copyLine(buffer, 
                                        index, 
                                        lineLegth, 
                                        foundLines, 
                                        targetStartIndex);

            linesCounter++;
        }

        index += lineLegth;
    }

    foundLines[index] = _NULL;

    return linesCounter;
}//end searchLines

int getLine(char buffer[], int startIndex) {
    int lineLength;

    lineLength = 0;

    while(buffer[startIndex] != NEW_LINE && buffer[startIndex] != _NULL) {
        lineLength++;
        startIndex++;         
    }

    if(buffer[startIndex] == NEW_LINE) {
        lineLength++;
    }

    return lineLength;
}//end getLine

int copyLine(char buffer[],
             int originStartIndex,
             int originlineLegth,
             char foundLines[],
             int targetStartIndex) {

    int originEndIndex;

    originEndIndex = originStartIndex + (originlineLegth - 1);

    while(originStartIndex <= originEndIndex) {
       foundLines[targetStartIndex] = buffer[originStartIndex];
       targetStartIndex++;
       originStartIndex++;
    }

    return targetStartIndex;
}//end copyLine
