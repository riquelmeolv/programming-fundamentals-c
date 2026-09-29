#include <stdio.h>

int main()
{
    int vet1[10], vet2[10], vetresult[20];
    for(int i = 0; i < 10; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vet1[i]);
    }
    printf("Fim do vetor 1.\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vet2[i]);
    }

    for(int j = 0; j < 10; j++)
    {
        vetresult[2 * j] = vet1[j];
        vetresult[2 * j + 1] = vet2[j];
    }

    for(int j = 0; j < 20; j++)
    {
        printf("Posição %d: %d\n",j , vetresult[j]);
    }

    return 0;
}