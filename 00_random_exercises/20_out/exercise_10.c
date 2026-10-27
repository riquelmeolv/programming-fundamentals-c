#include <stdio.h>
#define row 2
#define column 2

int main()
{
    int assentos[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            assentos[i][j] = 0;
        }
    }
    int answer, cordrow, cordcolumn, finalizar = 0;
    int sum = 0;
    while (finalizar == 0)
    {
        cordrow = 0, cordcolumn = 0, sum = 0;
        printf("===============\n");
        printf("0 - Reservar\n1 - Sair\n");
        printf("===============\n");
        printf("Answer: ");
        scanf("%d", &answer);

        if(answer == 1)
        {
            return 1;
        }
        else if(answer == 0)
        {
            printf("Enter row cordinate(0 a %d): ", row - 1);
            scanf("%d", &cordrow);
            printf("Enter column cordinate(0 a %d): ", column - 1);
            scanf("%d", &cordcolumn);
            
            assentos[cordrow][cordcolumn] = 1;
            printf("Cadeira reservada...\n");
        }
        else
        {
            printf("Invalid interger..\n");
            return 1;
        }
    

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
            {
                sum += assentos[i][j];
            }
        }
    
        if(sum == (row * column))
        {
            printf("Todos os assentos preenchidos!\n");
            finalizar = 1;
        }
    }
    
    return 0;
}