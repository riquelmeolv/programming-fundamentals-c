#include <stdio.h>
#define size 5
int main()
{
    int vetor[size];
    for(int i = 0; i < size; i++)
    {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int max = vetor[0], min = vetor[0], ind_max = 0, ind_min = 0;
    for(int i = 0; i < size; i++)
    {
        if(vetor[i] > max)
        {
            max = vetor[i];
            ind_max = i;
        }
        if(vetor[i] < min)
        {
            min = vetor[i];
            ind_min = i;
        }
    } 

    printf("Maior %d na posição %d\n", max, ind_max + 1);
    printf("Menor %d na posição %d", min, ind_min + 1);

    return 0;
}