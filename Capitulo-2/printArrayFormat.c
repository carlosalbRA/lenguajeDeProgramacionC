//Imprime N elementos de un arreglo, 10 en cada linea

#include <stdio.h>

#define NEW_LINE     '\n'
#define SPACE        ' '
#define MAX_ELEMENTS 100  

void main() {
    int decimals[MAX_ELEMENTS];
    int index;

    for(index = 0; index < MAX_ELEMENTS; index++)
        decimals[index] = index + 1;

    for (index = 0; index < MAX_ELEMENTS; index++)
        printf("%6d%c", decimals[index], (index % 10 == 9 || index == MAX_ELEMENTS -1) ? NEW_LINE : SPACE);
}//end-main