#include <stdio.h>

int main()
{
    int shirts[4][3];
    printf("                   | P | M | G |\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Model %d | Column %d: ", i + 1, j + 1);
            scanf("%d", &shirts[i][j]);
        }
    }

    int row, column;
    printf("Enter a row coordinate: ");
    scanf("%d", &row);
    printf("Enter a column coordinate: ");
    scanf("%d", &column);

    if(shirts[row][column] <= 0)
    {
        printf("Sold out...\n");
    }
    else
    {
        printf("Sale completed!\n");
        shirts[row][column] = shirts[row][column] - 1;
    }

    return 0;
}