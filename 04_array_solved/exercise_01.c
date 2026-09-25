#include <stdio.h>

int main()
{
    int n[9];
    for(int i = 0; i < 9; i++)
    {
        printf("Informe o número %d:", i + 1);
        scanf("%d", &n[i]);
    }

    int cont = 0;
    for(int j = 0; j < 9; j++)
    {
        cont = 0;
        for(int a = 1; a <= n[j]; a++)
        {
            if(n[j] % a == 0)
            {
                cont++;
            }
            if(n[j] == 1)
            {
                printf("Poosição %d: %d é primo\n", j + 1, n[j]);
            }
        }
        if(cont == 2)
        {
            printf("Posição %d: %d é primo. \n", j + 1, n[j]);
        }
    }
    return 0;
}