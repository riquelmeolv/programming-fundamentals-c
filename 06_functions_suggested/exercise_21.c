#include <stdio.h>
#define N 5

int greater(int matrix[N][N]);

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

    int max = greater(matrix);
    printf("Max: %d\n", max);

    return 0;
}

int greater(int matrix[N][N])
{
    int max = matrix[0][1];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(j > i && matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}