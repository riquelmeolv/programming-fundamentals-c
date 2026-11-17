#include <stdio.h>
int main()
{
    int codigo, codigo_origem;
    float peso, imposto, gramas, preco_total, valor_total, preco_grama;

    // Entrada
    printf("Infome o código de origem do produto (1 a 3): ");
    scanf("%d", &codigo_origem);
    if(codigo_origem < 1 || codigo_origem > 3)
    {
        return 1;
    }
    printf("Informe o código do produto (1 a 10): ");
    scanf("%d", &codigo);
    if(codigo < 1 || codigo > 10)
    {
        return 1;
    }
    printf("Informe o peso em Kg do produto: ");
    scanf("%f", &peso);

    // Conversão Kg para g
    gramas = peso * 1000;
    printf("A quantidade de gramas é: %.1f\n", gramas);

    // Preco total da conversão
    if(codigo >= 1 && codigo <= 4)
    {
        preco_grama = 10;
        preco_total = gramas * preco_grama;
        printf("O preço total da conversão para gramas é: %.2f\n", preco_total);
    }
    else if(codigo >= 5 && codigo <= 7)
    {
        preco_grama = 25;
        preco_total = gramas * preco_grama;
        printf("O preço total da conversão para gramas é: %.2f\n", preco_total);
    }
    else
    {
        preco_grama = 35;
        preco_total = gramas * preco_grama;
        printf("O preço total da conversão para gramas é: %.2f\n", preco_total);
    }

    // Imposto sobre o país de origem
    if(codigo_origem == 1)
    {
        // Isento
        imposto = 0;
    }
    else if(codigo_origem == 2)
    {
        imposto = preco_total * (15.0 / 100.0);
    }
    else
    {
        imposto = preco_total * (25.0 / 100.0);
    }

    // Valor total
    valor_total = preco_total + imposto;
    printf("O valor final do produto é: R$%.2f\n", valor_total);
    return 0;
}