#include <stdio.h>

int main()
{
    int map[5][5];
    printf("========================\n");
    printf("0 - Grass\n1 - Wall\n2 - Player(Just one)\n");
    printf("========================\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Row %d | Column %d: ", i, j);
            scanf("%d", &map[i][j]);
            if(map[i][j] > 2 || map[i][j] < 0)
            {
                printf("Invalid Interger\n");
                return 1;
            }
        }
    }

    printf("========================\n");
    int row, column, answer;
    printf("Enter a row coordinate: ");
    scanf("%d", &row);
    printf("Enter a column coordinate: ");
    scanf("%d", &column);

    if(map[row][column] == 0)
    {
        printf("Allowed Move!\n");
    }
    else if(map[row][column] == 1)
    {
        printf("Denied Move...\n");
    }
    else
    {
        printf("Invalid coordinate...\n");
    }
    

    return 0;
}