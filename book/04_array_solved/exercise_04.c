#include <stdio.h>

int main()
{
    int vetor[8], positive[8], negative[8];
    for (int i = 0; i < 8; i++)
    {
        printf("Informe um número inteiro na posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int p = 0, n = 0;
    for(int i = 0; i < 8; i++)
    {
        if(vetor[i] > 0)
        {
            positive[p] = vetor[i];
            p++;
        }
        else
        {
            negative[n] = vetor[i];
            n++;
        }
    }
    
    printf("Positivos:\n");
    for (int i = 0; i < p; i++)
    {
        printf("Posição %d: %d\n", i + 1, positive[i]);
    }
    printf("Negativos:\n");
    for (int i = 0; i < n; i++)
    {  
        printf("Posição %d: %d\n", i + 1, negative[i]);
    }
    
    return 0;
}