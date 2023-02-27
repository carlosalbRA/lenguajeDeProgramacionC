//Constantes

#include <stdio.h>

void main() {
    printf("(float/double) Scientific notation 123.456e-7: %f\n", 123.456e-7);
    printf("(float/double) Scientific notation 0.12E3:     %f\n\n", 0.12E3);

    printf("long format 123L: %ld\n\n", 123L);

    printf("int Decimal format 47:       %d\n", 47);
    printf("int Octal format 057:        %d\n", 057);
    printf("int Hexadecimal format 0x2F: %d\n\n", 0x2F);
    
    printf("char format '?':              %c\n", '?');
    printf("char Decimal format 63:       %c\n", 63);
    printf("char Octal format 077:        %c\n", 077);
    printf("char Octal format '\\077':     %c\n", '\077');
    printf("char Hexadecimal format 0x3F: %c\n", 0x3F);
}//end-main