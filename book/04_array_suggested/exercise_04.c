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

    for(int j = 0; j < N; j++)
    {
        if(vector[j] == 30)
        {
            printf("30 Position: %d\n", j + 1);
        }
    }

    return 0;
}