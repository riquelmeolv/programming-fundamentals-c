#include <stdio.h>

int main()
{
    int A[4][5], B[5][2], C[4][2];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Linha %d | Coluna %d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Linha %d | Coluna %d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 4; k++)
            {
                for(int l = 0; l < 2; k++)
                {
                    
                }
            }
        }
    }
    return 0;
}