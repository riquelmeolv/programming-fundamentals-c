#include <stdio.h>
#define size 10

int main()
{
    int vetor[size], random;
    for(int i = 0; i < size; i++)
    {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Informe um número: ");
    scanf("%d", &random);

    for(int i = 0; i < size; i++)
    {
        if(random == vetor[i])
        {
            printf("Está no vetor na posição %d.", i + 1);
        }
    }
    return 0;
}