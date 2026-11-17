#include <stdio.h>
int main()
{
    // Receber
    float preco, venda_mensal_media;

    // Declarar
    float novo_preco, aumento, diminuicao;

    // Entrada
    printf("Olá, informe o preço do produto: ");
    scanf("%f", &preco);
    printf("Informe o valor da venda mensal média desse produto: ");
    scanf("%f", &venda_mensal_media);

    // Verificação de preço
    if(venda_mensal_media < 500 && preco < 30)
    {
        aumento = 1 + (10.0 / 100.0);
        preco *= aumento;
        printf("O novo preço para esse produto é: %.2f\n", preco);
    }
    else if(venda_mensal_media >= 500 && venda_mensal_media < 1200 && preco >= 30 && preco < 80)
    {
        aumento = 1 + (15.0 / 100.0);
        preco *= aumento;
        printf("O novo preço para esse produto é: %.2f\n", preco);
    }
    else
    {
        diminuicao = 1 - (20.0 / 100.0);
        preco *= diminuicao;
        printf("O novo preço para esse produto é: %.2f\n", preco);
    }

    return 0;
}