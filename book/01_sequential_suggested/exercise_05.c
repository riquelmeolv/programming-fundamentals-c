#include <stdio.h>
int main()
{
    float preco, desconto, newpreco;
    printf("Informe o preço do produto: ");
    scanf("%f", &preco);

    desconto = preco * 0.1;
    newpreco = preco - desconto;

    printf("O novo preço é: R$ %.2f\n", newpreco);
    return 0;
}