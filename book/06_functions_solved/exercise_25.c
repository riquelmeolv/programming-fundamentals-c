#include <stdio.h>
#define N 5

void zero(int *vector);

int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Position %d: ", i);
        scanf("%d", &vector[i]);
    }

    zero(vector);
    for(int i = 0; i < N; i++)
    {
        printf("Number: %d\n", vector[i]);
    }

    return 0;
}

void zero(int *vector)
{
    for(int i = 0; i < N; i++)
    {
        if(vector[i] < 0)
        {
            vector[i] = 0;
        }
    }
}