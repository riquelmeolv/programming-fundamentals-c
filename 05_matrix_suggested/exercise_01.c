#include<stdio.h>

int main()
{
    int numbers[3][5];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Número %d: ", i + 1);
            scanf("%d", &numbers[i][j]);
        }
    }
    
    int cont = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(numbers[i][j] >= 15 && numbers[i][j] <= 20)
            {
                cont++;
            }
        }
    }
    
    printf("Quantidade de números entre 15 e 20: %d", cont);
    return 0;
}