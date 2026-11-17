#include <stdio.h>

int main()
{
    int row = 2, column = 4;
    int numbers[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Linha %d | Coluna %d: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }
    
    int min[row], max[column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(numbers[i][j] < minI)
            {
                minI = numbers[i][j];
            }
        }
    }
    printf("%d\n", minI);
    return 0;
}