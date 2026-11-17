#include <stdio.h>
int main()
{
    float salario, conta1, conta2, multa1, multa2, saldo;
    printf("Informe seu salário: ");
    scanf("%f", &salario);
    printf("Informe o valor da conta 1: ");
    scanf("%f", &conta1);
    printf("Informe o valor da conta 2: ");
    scanf("%f", &conta2);

    multa1 = conta1 * 0.02;
    multa2 = conta2 * 0.02;
    saldo = salario - conta1 - conta2 - multa1 - multa2;

    printf("O que restou do seu salário foi: R$%.2f\n", saldo);
    return 0;
}