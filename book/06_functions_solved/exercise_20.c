#include <stdio.h>
#define N 2

void media(int matrix[N][N]);

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

    media(matrix);

    return 0;
}

void media(int matrix[N][N])
{
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j && i != N - 1)
            {
                sum += matrix[i + 1][j]; 
                printf("%d\n", matrix[i + 1][j]);
            }
        }
    }

    int media = sum / N;
    printf("The average of the numbers below the main diagonal is: %d\n", media);
}