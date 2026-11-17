#include <stdio.h>
#define N 4

int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Enter integer %d: ", i);
        scanf("%d", &vector[i]);
    }

    int temp;
    for(int i = 0; i < N; i++)
    {
        printf("Position %d | %d\n", i, vector[N - 1 - i]);
    }
    return 0;
}