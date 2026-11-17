#include <stdio.h>

int main()
{
    int qtd[10], preco[10], ind_sale, all_sales, largest, index;
    float comission;
    for(int i = 0; i < 10; i++)
    {
        printf("Informe o preço do produto %d: ", i + 1);
        scanf("%d", &preco[i]);
        printf("Informe a quantidade desse produto: ");
        scanf("%d", &qtd[i]);
    }
    all_sales = 0;
    largest = qtd[0];
    for(int i = 0; i < 10; i++)
    {   
        ind_sale = preco[i] * qtd[i];
        all_sales += ind_sale;
        printf("Produto %d:\nPreço: R$ %d\nQuantidade: %d\n", i + 1, preco[i], qtd[i]);
        printf("Valor da venda desse produto: R$%d\n", ind_sale);
        
        if(qtd[i] > largest)
        {
            index = i;
        }
    }
    
    comission = all_sales * 0.05;
    printf("Valor total das vendas: R$ %d\n", all_sales);
    printf("A comissão que o vendedor irá receber: R$ %.2f\n", comission);
    printf("O valor do objeto mais vendido: R$ %d\nSua posição no vetor: %d\n", preco[index], index);

    return 0;
}