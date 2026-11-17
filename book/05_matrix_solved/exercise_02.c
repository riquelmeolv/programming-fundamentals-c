#include <stdio.h>

int main()
{
    int matriz[10][3];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Linha %d | Coluna %d: ", i, j);
            scanf("%d",&matriz[i][j]);
        }
    }

    int p1 = 0, p2 = 0, p3 = 0;
    int ind_menor, menor_nota;
    for(int i = 0; i < 10; i++)
    {
        menor_nota = matriz[i][0];
        ind_menor = 0;
        for(int j = 0; j < 3; j++)
        {
            if(matriz[i][j] < menor_nota)
            {
                menor_nota = matriz[i][j];
                ind_menor = j;
            }
        }
        printf("Aluno %d menor nota: Prova %d\n",i + 1 ,ind_menor + 1);

        if(ind_menor == 0)
        {
            p1++;
        }
        else if(ind_menor == 1)
        {
            p2++;
        }
        else
        {
            p3++;
        }
    }

    printf("Menor nota na Prova 1: %d\n", p1);
    printf("Menor nota na prova 2: %d\n", p2);
    printf("Menor nota na prova 3: %d\n", p3);
    return 0;
}