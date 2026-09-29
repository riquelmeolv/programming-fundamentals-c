#include <stdio.h>

int main()
{
    float vetor[5];
    float soma = 0, media, cont = 0;
    for(int i = 0; i < 5; i++)
    {
        printf("Informe o nota %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        soma += vetor[i];
        if(vetor[i] > 7)
        {
            cont++;
        }
    }

    media = soma / 5;
    printf("A soma das médias é: %.2f\n", soma);
    printf("A média das notas é: %.1f\n", media);
    printf("A quatidade de notas acima da média é: %.1f\n", cont);
    return 0;
}