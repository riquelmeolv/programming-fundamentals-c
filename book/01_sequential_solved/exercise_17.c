#include <stdio.h>
int main()
{
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;

    printf("Informe o salário: ");
    scanf("%f", &salario);
    printf("Cheque 1: ");
    scanf("%f", &cheque1);
    printf("Cheque 2: ");
    scanf("%f", &cheque2);

    cpmf1 = 0.38 * cheque1;
    cpmf2 - 0.38 * cheque2;
    saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;

    printf("O saldo é: %.2f\n", saldo);
    
    return 0;
}