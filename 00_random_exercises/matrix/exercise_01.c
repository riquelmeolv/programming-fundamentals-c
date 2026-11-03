#include <stdio.h>
#define N 4

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

    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j)
            {
                printf("Main: %d\n", matrix[i][j]);
            }
            if(i + j == N - 1)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum: %d\n", sum);
    return 0;
}