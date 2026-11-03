#include <stdio.h>
#define N 3

int main()
{
    int matriz[N][N];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Row %d | Column %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("=== Matrix ===\n");
    for(int i = 0; i < N; i++)
    {
        printf("Row %d | ", i);
        for(int j = 0; j < N; j++)
        {
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }

    int aux;
    for(int i = 0; i < 1; i++)
    {
        for(int j = 0; j < N; j++)
        {
            aux = matriz[i][j];
            matriz[i][j] = matriz[N - 1][j];
            matriz[N - 1][j] = aux;
        }
    }

    printf("=== Reverse ===\n");
    for(int i = 0; i < N; i++)
    {
        printf("Row %d | ", i);
        for(int j = 0; j < N; j++)
        {
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}