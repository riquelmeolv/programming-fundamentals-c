#include <stdio.h>

int main()
{
    int matrix[2][3], transposed[3][2];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Row %d | Columns %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            transposed[i][j] = matrix[j][i];
        }
    }

    printf("=== Matrix ===\n");
    for(int i = 0; i < 2; i++)
    {
        printf("Row %d | ", i);
        for(int j = 0; j < 3; j++)
        {
            printf("%d | ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("=== Transposed ===\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Row %d | ", i);
        for(int j = 0; j < 2; j++)
        {
           printf("%d | ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}