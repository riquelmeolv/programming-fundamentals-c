#include <stdio.h>
#define row 3
#define column 1

int main()
{
    int numbers[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Linha %d | Coluna %d: ", i + 1, j + 1);
            scanf("%d", &numbers[i][j]);
        }
    }

    int greater = numbers[0][0], row_grater, column_greater;
    int small = numbers[0][0], row_small, column_small;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(numbers[i][j] > greater)
            {
                greater = numbers[i][j];
                row_grater = i;
                column_greater = j;
            }
            if(numbers[i][j] < small)
            {
                small = numbers[i][j];
                row_small = i;
                column_small = j;
            }
        }
    }
    return 0;
}