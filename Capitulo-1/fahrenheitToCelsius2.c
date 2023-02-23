/*El siguiente programa imprime la tabla de conversion de temperaturas Fahrenheit a centigrados
o Celsius utilizando la formula C = (5/9)(F-32) */
#include <stdio.h>

#define TEMP_LOWER  0   //Limite inferior
#define TEMP_UPPER  300 //Limite superior
#define TEMP_STEP   20  //Incremento

void main() {
    float tempFahrenheit;

    printf("***************\n");
    printf("* F \t* C   *\n");
    printf("***************\n");

    for(tempFahrenheit = TEMP_LOWER; tempFahrenheit <= TEMP_UPPER; tempFahrenheit += TEMP_STEP)
        printf("%4.0f\t%6.1f\n", tempFahrenheit, (5.0 / 9.0) * (tempFahrenheit - 32.0));
}//end-main