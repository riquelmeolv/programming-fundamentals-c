#include <stdio.h>
#define N 2

void mult(int matrix[N][N]);

int main()
{
    int matrix[N][N];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Row %d | Column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    mult(matrix);

    return 0;
}

void mult(int matrix[N][N])
{
    int mult[N], cont = 0, result[N][N];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <  N; j++)
        {
            if(j == i)
            {
                mult[cont] = matrix[i][j];
                cont++;
            }
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            result[i][j] = mult[i] * matrix[i][j];
        }
    }

    printf("=== RESULT ===\n");
    for(int i = 0; i < N; i++)
    {
        printf("Row %d | ", i);
        for(int j = 0; j < N; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}