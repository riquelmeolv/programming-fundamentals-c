#include <stdio.h>

int main()
{
    float num = 0, soma = 0, cont = 0, media = 0, maior, menor;
    while (num >= 0)
    {
        printf("N: ");
        scanf("%f", &num);
        if(num < 0)
        {
            break;
        }

        if(cont == 0)
        {
            maior = num;
            menor = num;
        }
        else
        {
            if(num > maior)
            {
               maior = num;
            }
            if(num < menor)
           {
              num = menor;
           }
        }
        soma += num;
        cont++;
        num--;
    }

    media = soma / cont;
    printf("A média foi: %.1f\n", media);
    printf("O maior número: %.1f\n", maior);
    printf("O menor número: %.1f\n", menor);
    
    return 0;
}