#include <stdio.h>
int main()
{
    float peso, peso15, peso20;
    printf("Informe seu peso em Kg: ");
    scanf("%f", &peso);

    peso15 = peso * 1.15;
    peso20 = peso * 1.20;
    
    printf("Seu peso acrescido de 15%: %.2f Kg\n", peso15);
    printf("Seu peso acrescido de 20%: %.2f Kg\n", peso20);
    return 0;
}