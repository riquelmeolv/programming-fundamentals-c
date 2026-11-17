#include <stdio.h>

int main()
{
    int row = 6, column = 4;
    int numbers[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Linha %d | Coluna %d: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }
    int cont = 0;
    int result[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(numbers[i][j] > 30)
            {
                cont++;
                result[i][j] = 0;
            }
            else
            {
                result[i][j] = numbers[i][j];
            }
        }
    }

    for(int i = 0; i < row; i++)
    {
        printf("RESULTANTE | Linha %d |", i);
        for(int j = 0; j < column; j++)
        {
            printf(" %d |", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}