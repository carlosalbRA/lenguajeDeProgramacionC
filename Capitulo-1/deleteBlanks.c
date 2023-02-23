/*Eliminar los blancos y los tabuladores del final de las lineas y los tabuladores de cada linea de
entrada y para borrar completamente las lineas en blanco.

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define SPACE      ' '
#define TAB        '\t'
#define NEW_LINE   '\n'
#define _NULL      '\0'
#define YES        1
#define NO         0
#define MAX_LENGTH 1001

int   cleanLines(char buffer[], char linesClean[]);
int   getLine(char buffer[], int startIndex);
short isBlankLine(char buffer[], int startIndex, int lineLegth);
int   copyLinesSkipingTabs(char buffer[],
                           int originStartIndex,
                           int originlineLegth,
                           char linesClean[],
                           int targetStartIndex);
int   ignoreTrailingSpaces(char linesClean[], int targetStartIndex);

void main() {
    int  lineLength;
    char input[MAX_LENGTH];
    char linesClean[MAX_LENGTH];
    int  linesCounter;

    int character;
    int index;

    for(index = 0; index < (MAX_LENGTH - 1) && (character = getchar()) != EOF; ++index)
        input[index] = character;

    input[index] = _NULL;

    linesCounter = cleanLines(input, linesClean);

    printf("The result is:\n%s", linesClean);
   
    
}//end main

int cleanLines(char buffer[], char linesClean[]) {
    int index;
    int targetStartIndex;
    int linesCounter;
    int lineLegth;

    linesCounter = 0;
    index = 0;
    targetStartIndex = 0;

    while(index <= (MAX_LENGTH - 1) && buffer[index] != _NULL) {
        lineLegth = getLine(buffer, index);

        if(isBlankLine(buffer, index, lineLegth) == NO) {

            targetStartIndex = copyLinesSkipingTabs(buffer, 
                                                    index, 
                                                    lineLegth, 
                                                    linesClean, 
                                                    targetStartIndex);

            targetStartIndex = ignoreTrailingSpaces(linesClean, 
                                                    targetStartIndex);

            linesCounter++;
        }

        index += lineLegth;
    }

    linesClean[targetStartIndex] = _NULL;

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

short isBlankLine(char buffer[], int startIndex, int lineLegth) {
    int   endIndex;

    endIndex = startIndex + (lineLegth - 1);

    while(startIndex <= endIndex) {
        if(buffer[startIndex] != SPACE &&
           buffer[startIndex] != TAB   &&
           buffer[startIndex] != NEW_LINE)
            return NO;

       startIndex++;
    }

    return YES;

}//end isBlankLine

int copyLinesSkipingTabs(char buffer[],
                         int originStartIndex,
                         int originlineLegth,
                         char linesClean[],
                         int targetStartIndex) {

    int originEndIndex;

    originEndIndex = originStartIndex + (originlineLegth - 1);

    while(originStartIndex <= originEndIndex) {

        if(buffer[originStartIndex] != TAB) {
            linesClean[targetStartIndex] = buffer[originStartIndex];
            targetStartIndex++;
        }
        
        originStartIndex++;
    }

    return targetStartIndex;
}//end copyLinesSkipingTabs

int ignoreTrailingSpaces(char linesClean[],
                         int targetStartIndex) {
    int endIndex;
    endIndex = targetStartIndex - 2;

    while(linesClean[endIndex] == SPACE)       
        --endIndex;

    if(endIndex == (targetStartIndex - 2))
        return targetStartIndex;
    else {
        linesClean[++endIndex] = NEW_LINE;
        return ++endIndex;
    }
}//end ignoreTrailingSpaces
