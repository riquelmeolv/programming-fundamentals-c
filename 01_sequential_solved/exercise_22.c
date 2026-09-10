#include <stdio.h>

int main()
{
    float salarioBase, valor_kw, qtd_kw, valor_bruto, valor_final, desconto;

    printf("Informe o salário mínimo: ");
    scanf("%f", &salarioBase);
    printf("Informe a quantidade de kW consumida: ");
    scanf("%f", &qtd_kw);

    valor_kw = salarioBase * (1.0 / 5.0);
    valor_bruto = qtd_kw * valor_kw;
    desconto = valor_bruto * 0.15;
    valor_final = valor_bruto - desconto;

    printf("O valor do quilowatt: %.2f\n", valor_kw);
    printf("O valor bruto é: %.2f\n", valor_bruto);
    printf("O valor final é: %.2f\n", valor_final);
    
    return 0;
}