//Año bisiesto

#include <stdio.h>

#define _NULL '\0'
#define YES   1
#define NO    0

short isLeapYear (int year);

void main() {

    int year;

    year = 2023;

    if(isLeapYear(year) == YES)
        printf("%d is a LEAP-YEAR", year);
    else
        printf("%d is not a LEAP-YEAR", year);
}//end-main

short isLeapYear(int year) {

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return YES;
    else
        return NO;
}//end isLeapYear 