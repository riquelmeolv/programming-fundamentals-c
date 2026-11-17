#include <stdio.h>

int main(void){
    int *pint;
    char *pchar;
    float *pfloat;

    int a;
    float b;

    printf("Size of int pointer(int *): %zu bytes\n", sizeof(pint));
    printf("Size of char pointer(char *): %zu bytes\n", sizeof(pchar));
    printf("Size of float pointer(float *): %zu bytes\n", sizeof(pfloat));

    printf("Size of 'int' variable: %zu bytes\n", sizeof(a));
    printf("Size of 'float' variable: %zu bytes\n", sizeof(b));
    return 0;
}