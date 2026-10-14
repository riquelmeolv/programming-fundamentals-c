#include <stdio.h>

int main()
{
    char names[8][20], products[4][20]; 
    float prices[4][8];
    for(int i = 0; i < 8; i++)
    {
        printf("Informe o nome da loja %d: ", i + 1);
        scanf("%s", names[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        printf("Informe o nome do produto %d: ", i + 1);
        scanf("%s", products[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            printf("Produto %s na loja %s: ", products[i], names[j]);
            scanf("%f", &prices[i][j]);
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(prices[i][j] < 120)
            {
                printf("%s - %s\n", products[i], names[j]);
            }
        }
    }
    return 0;
}