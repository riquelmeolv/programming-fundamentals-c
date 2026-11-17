#include <stdio.h>
int main()
{
    float n1, n2, div;
    printf("Número 1: ");
    scanf("%f", &n1);
    printf("Número 2: ");
    scanf("%f", &n2);

    div = n1 / n2;
    printf("O resultado da divisão de n1 por n2 é: %.2f\n", div);
    return 0;
}