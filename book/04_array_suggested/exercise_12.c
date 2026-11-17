#include <stdio.h>
#define N 5

int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    int sum = 0;
    for(int j = 0; j < N; j++)
    {
        printf("Digite o %d° número %d\n", j + 1, vector[j]);
        sum += vector[j];
    }

    printf("Os números digitados foram: ");
    for(int k = 0; k < N; k++)
    {
        printf(" %d +", vector[k]);
    }
    printf("= %d\n", sum);
    return 0;
}