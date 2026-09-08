#include <stdio.h>

int main()
{
    float deposito, taxa, rendimento, valor_final;
    printf("Informe o seu depósito: ");
    scanf("%f", &deposito);
    printf("Informe a taxa de juros: ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa / 100.0);
    valor_final = deposito + rendimento;

    printf("Seu redimento: R$%.2f\n", rendimento);
    printf("Seu valor final é: R$%.2f\n", valor_final);
    return 0;
}