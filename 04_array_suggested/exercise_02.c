#include <stdio.h>
#define N 7

int main()
{
    int vector[N];

    // Asking the user for numbers
    for(int i = 0; i <  N; i++)
    {
        printf("Integer %d: ", i);
        scanf("%d", &vector[i]);
    }

    // Multiples of 2
    for(int j = 0; j < N; j++)
    {
        if(vector[j] % 2 == 0)
        {
            printf("Multiple of 2: %d\n", vector[j]);
        }
    }

    // Multiples of 3
    for(int k = 0; k < N; k++)
    {
        if(vector[k] % 3 == 0)
        {
            printf("Multiple of 3: %d\n", vector[k]);
        }
    }

    // Multiples of 2 and 3
    for(int l = 0; l < N; l++)
    {
        if(vector[l] % 2 == 0 && vector[l] % 3 == 0)
        {
            printf("Multiple of 2 and 3: %d\n", vector[l]);
        }
    }

    return 0;
}