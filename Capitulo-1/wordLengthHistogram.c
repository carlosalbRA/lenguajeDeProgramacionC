/*Imprime un histograma con la longitud de las palabras de su entrada

In Linux and MacOS environments, you can terminate standard input by outputting EOF (end of file) 
using the <CTRL> + <D> keyboard shortcut

In Windows Command Prompt or Powershell, the equivalent of EOF 
requires a two-step sequence: <CTRL> + <Z> followed by <enter>*/

#include <stdio.h>

#define SPACE            ' '
#define TAB              '\t'
#define NEW_LINE         '\n'
#define MAX_NUMBER_WORDS 100
#define YES              1
#define NO               0

void main() {

    short isInWord;
    short indexAux;
    short indexRow;
    short indexColumn;
    int   character;
    int   maxWordLength;
    long  indexWords;
    long  wordsLength[MAX_NUMBER_WORDS];
    
    indexWords    = 0;
    maxWordLength = 0;

    isInWord = NO;

    for (indexAux = 0; indexAux < MAX_NUMBER_WORDS; indexAux++)
        wordsLength[indexAux] = 0;

    while((character = getchar()) != EOF) {
                
        if (character == NEW_LINE ||
            character == SPACE    ||
            character == TAB) {

            if (isInWord == YES ) {
                if(wordsLength[indexWords] > maxWordLength) 
                    maxWordLength = wordsLength[indexWords];

                indexWords++;
            }
            
            isInWord = NO;
        }
        else if (isInWord == NO) {
            if (indexWords < MAX_NUMBER_WORDS) {
                wordsLength[indexWords]++;
                isInWord = YES;
            }
        }
        else
            wordsLength[indexWords]++;
    }//end-while
    
    //Muestra valores estadisticos
    printf("Number of Words: %ld\n", indexWords);
    printf("Max word Length: %d\n", maxWordLength);

    printf("Word -> Length:\n");
    for (indexAux = 0; indexAux < indexWords; indexAux++)
        printf("%d -> %ld\n", (indexAux + 1), wordsLength[indexAux]);

    //Muestra el histograma
    printf("__");
    for (indexAux = 0; indexAux < indexWords; indexAux++)
        printf("_");
    
    printf("\n");

    for (indexRow = maxWordLength; indexRow >= 1; indexRow--) {
        printf("%d|", (indexRow % 10));

        for (indexColumn = 0; indexColumn < indexWords; indexColumn++) {
            if ((wordsLength[indexColumn] - indexRow) >= 0) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    printf("X|");
    for (indexAux = 0; indexAux < indexWords; indexAux++)
        printf("%d", (indexAux + 1) % 10);

}//end-main