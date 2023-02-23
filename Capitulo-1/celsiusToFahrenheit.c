/*El siguiente programa imprime la tabla de conversion de temperaturas Celsius a Fahrenheit
utilizando la formula F = (9/5)C + 32 */
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

    tempCelsius = tempLower;

    printf("***************\n");
    printf("* C \t* F   *\n");
    printf("***************\n");

    while(tempCelsius <= tempUpper) {
        tempFahrenheit = (9.0 / 5.0) * tempCelsius + 32.0;
        printf("%4.0f\t%6.1f\n", tempCelsius, tempFahrenheit);
        tempCelsius += tempStep;
    }//end-while
}//end-main