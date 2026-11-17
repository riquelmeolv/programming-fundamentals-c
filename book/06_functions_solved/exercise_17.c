#include <stdio.h>
#define rowcolumn 2

int summatrix(int matrix[rowcolumn][rowcolumn]);

int main()
{
    int matrix[rowcolumn][rowcolumn];
    for(int i = 0; i < rowcolumn; i++)
    {
        for( int j = 0; j < rowcolumn; j++)
        {
            printf("Row %d | Column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum;
    sum = summatrix(matrix);
    printf("A soma da matriz: %d\n", sum);
    return 0;
}

int summatrix(int matrix[rowcolumn][rowcolumn])
{
    int sum = 0;
    for(int i = 0; i < rowcolumn; i++)
    {
        for(int j = 0; j < rowcolumn; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}