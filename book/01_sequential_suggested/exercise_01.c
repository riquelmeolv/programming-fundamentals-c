#include <stdio.h>
int main()
{
    float n1, n2, subtracao;
    printf("Número 1: ");
    scanf("%f", &n1);
    printf("Número 2: ");
    scanf("%f", &n2);

    subtracao = n1 - n2;
    printf("O resultado da subtração de n1 por n2: %.2f\n", subtracao);
    return 0;
}