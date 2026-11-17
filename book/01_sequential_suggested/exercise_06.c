#include <stdio.h>
int main()
{
    float salarioFix, totalVendas, comissao, salarioFinal;
    printf("Informe o seu salário fixo: ");
    scanf("%f", &salarioFix);
    printf("Informe o total em vendas: ");
    scanf("%f", &totalVendas);

    comissao = totalVendas * 0.04;
    salarioFinal = salarioFix + comissao;

    printf("A sua comissão é: R$%.2f\n", comissao);
    printf("O salário é: R$%.2f\n", salarioFinal);
    
    return 0;
}