#include <stdio.h>
#define N 5

int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Integer %d: ", i);
        scanf("%d", &vector[i]);
    }

    int menor = vector[0];
    for(int i = 0; i < N;i++)
    {
        if(vector[i] < menor)
        {
            menor = vector[i];
        }
    }

    for(int i = 0; i < N; i++)
    {
        vector[i] = vector[i] / menor;
        printf("Vector %d | %d\n", i, vector[i]);
    }
    return 0;
}