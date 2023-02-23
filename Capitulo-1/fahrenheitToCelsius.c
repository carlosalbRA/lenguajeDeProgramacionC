/*El siguiente programa imprime la tabla de conversion de temperaturas Fahrenheit a centigrados
o Celsius utilizando la formula C = (5/9)(F-32)*/
#include <stdio.h>

void main() {
    int   tempLower;
    int   tempUpper;
    int   tempStep;
    float tempFahrenheit;
    float tempCelsius;

    tempLower = 0;   //Limite inferior
    tempUpper = 300; //Limite superior
    tempStep  = 20;  //Incremento

    tempFahrenheit = tempLower;

    printf("***************\n");
    printf("* F \t* C   *\n");
    printf("***************\n");

    while(tempFahrenheit <= tempUpper) {
        tempCelsius = (5.0 / 9.0) * (tempFahrenheit - 32.0);
        printf("%4.0f\t%6.1f\n", tempFahrenheit, tempCelsius);
        tempFahrenheit += tempStep;
    }//end-while
}//end-main