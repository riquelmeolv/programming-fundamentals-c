#include <stdio.h>

int main()
{
    int row = 10;
    int column = 20;
    int numbers[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Linha %d | Coluna %d: ", i + 1, j + 1);
            scanf("%d", &numbers[i][j]); 
        }
    }

    int sum[row], sum_row;
    for(int i = 0; i < row; i++)
    {
        sum_row = 0;
        for(int j = 0; j < column; j++)
        {
            sum_row += numbers[i][j];
        }
        sum[i] = sum_row;
    }

    int result[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            result[i][j] = numbers[i][j] * sum[i];
            printf("Resultante| Linha %d | Coluna %d: %d\n", i + 1, j + 1, result[i][j]);
        }
    }
    return 0;
}