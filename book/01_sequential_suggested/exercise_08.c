#include <stdio.h>
int main()
{
    float peso, gramas;
    printf("Informe seu peso em Kg: ");
    scanf("%f", &peso);

    gramas = peso * 1000;

    printf("O peso em gramas: %.2f\n", gramas);
    return 0;
}