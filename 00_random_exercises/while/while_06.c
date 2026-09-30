#include <stdio.h>

int main()
{
    int num, temp, soma;
    soma = 0;
    while (num != 0)
    {
        printf("N: ");
        scanf("%d", &temp);
        if(temp == 0)
        {
            
            num = 0;
        }
        soma += temp;
    }

    printf("A soma: %d\n", soma);
    return 0;
}