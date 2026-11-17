#include <stdio.h>

int main()
{
    int row = 2, column = 3;
    int numbers[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Linha %d | Coluna %d: ", i + 1, j + 1);
            scanf("%d", &numbers[i][j]);
        }
    }

    int min = numbers[0][0];
    int MINMAX, position_row = 0, position_column = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(numbers[i][j] < min)
            {
                min = numbers[i][j];
                position_row = i;
                position_column = j;
            }
        }
    }
    printf("O mínimo é %d na linha %d na coluna %d.\n", min, position_row + 1, position_column + 1);

    MINMAX = numbers[position_row][0];
    int position_row_MINMAX = position_row;
    int position_column_MINMAX = 0;
    for(int i = position_row; i <= position_row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(numbers[i][j] > MINMAX)
            {
                MINMAX = numbers[i][j];
                position_row_MINMAX = i;
                position_column_MINMAX = j;
            }
        }
    }
    printf("O MINMAX foi %d na linha %d e coluna. %d\n", MINMAX, position_row_MINMAX + 1, position_column_MINMAX + 1);
    return 0;
}