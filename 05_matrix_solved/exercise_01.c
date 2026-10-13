#include <stdio.h>

int main()
{
    int M[2][2], R[2][2], maior;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Linha %d, Coluna %d: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    maior = M[0][0];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(M[i][j] > maior)
            {
                maior = M[i][j];
            }
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            R[i][j] = M[i][j] * maior;
            printf("Linha %d, coluna %d: \n", i, j);
            printf("%d\n", R[i][j]);
        }
    }
    return 0;
}