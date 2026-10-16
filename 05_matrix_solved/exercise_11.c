#include <stdio.h>

int main()
{
    int numbers[8][8];
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            printf("Linha %d | Coluna %d: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }

    for(int i = 0; i < 8; i++)
    {
        for( int j = 0; j < 8; j++)
        {
            if(numbers[i][j] != numbers[j][i])
            {
                printf("Não simétrica\n");
                return 1;
            }
        }
    }
    printf("Simétrica\n");
    return 0;
}