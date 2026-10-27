#include <stdio.h>
#define N 2

void secdiagonal(int matrix[N][N]);

int main()
{
    int matrix[N][N];
    for(int i = 0; i < N; i++)
    {
        for( int j = 0; j < N; j++)
        {
            printf("Row %d | Column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    secdiagonal(matrix);

    return 0;
}

void secdiagonal(int matrix[N][N])
{
    int min = matrix[0][N - 1];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(j == N - 1 - i && matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }

    printf("The minimum valor int the secondary diagonal is: %d\n", min);
}