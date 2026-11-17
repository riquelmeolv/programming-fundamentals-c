#include <stdio.h>
#define N 10

int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Integer %d: ", i);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if(vector[i] >= 0)
        {
            printf("Positive: %d\n", vector[i]);
        }
    }
    
    return 0;
}