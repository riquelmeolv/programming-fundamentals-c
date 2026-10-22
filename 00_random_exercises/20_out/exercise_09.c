#include <stdio.h>

int main()
{
    float UCI[3][4];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Row %d | Column %d: ", i + 1, j + 1);
            scanf("%f", &UCI[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(UCI[i][j] >= 37.8)
            {
                printf("Alert!!\n");
                printf("Coordinates| Row %d | Column %d\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}