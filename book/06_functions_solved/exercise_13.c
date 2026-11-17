#include <stdio.h>

void factorial(int *V, int *B);

int main()
{
    int A[10], B[10];
    factorial(A, B);
    for(int i = 0; i < 10; i++)
    {
        printf("%d | B:%d\n", i, B[i]);
    }
    return 0;
}

void factorial(int *V, int *B)
{
    for(int i = 0; i < 10; i++)
    {
        printf("Número %d: ", i+ 1);
        scanf("%d", &V[i]);
    }

    int fat = 1;
    for(int i = 1; i <= 10; i++)
    {
        fat = 1;
        for(int j = 1; j <= V[i]; j++)
        {
            fat *= j;
        }
        B[i - 1] = fat;
    }
}