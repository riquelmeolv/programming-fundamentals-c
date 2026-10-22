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
            printf("Linha %d | Coluna %d: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }

    int greater = numbers[0][0], row_grater = 0, column_greater = 0;
    int small = numbers[0][0], row_small = 0, column_small = 0;
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
    printf("Greater %d | Row %d | Column %d\n", greater, row_grater, column_greater);
    printf("Small %d | Row %d | Column %d\n", small, row_small, column_small);
    return 0;
}