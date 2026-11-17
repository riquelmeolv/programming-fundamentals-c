#include <stdio.h>
#define row 1
#define column 4

int main()
{
    int bus[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            bus[i][j] = 0;
        }
    }

    int finalizar,sum = 0, sum1 = 0, sum2 = 0, answer, cordrow, cordcolumn;
    while (finalizar == 0)
    {
        printf("===============\n");
        printf("0 - Reservar\n1 - Sair\n");
        printf("===============\n");
        printf("Answer: ");
        scanf("%d", &answer);

        if(answer == 1)
        {
            return 1;
        }
        else
        {
            printf("Enter row cordinate: ");
            scanf("%d", &cordrow);
            printf("Enter column cordinate: ");
            scanf("%d", &cordcolumn);

            bus[cordrow][cordcolumn] = 1;
        }

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
            {
                if(j == 0 || j == 3)
                {
                    sum1++;
                }
                if(j == 1 || j == 2)
                {
                    sum2++;
                }

                sum += bus[i][j];

            }
        }
        if(sum = (row * column))
        {
            finalizar = 1;
        }
    }

    printf("Coluna 0 e 3: %d\n", sum1);
    printf("Coluna 1 e 2: %d\n", sum2);
    
    return 0;
}