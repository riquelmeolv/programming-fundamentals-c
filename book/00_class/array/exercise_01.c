#include <stdio.h>
#define N 8
int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Enter integer %d: ", i);
        scanf("%d", &vector[i]);
    }

    for(int i = 0; i < N; i++)
    {
        if(vector[i] % 2 == 0)
        {
            printf("Even number: %d\n", vector[i]);
            printf("Position: %d\n", i);
        }
    }
    return 0;
}