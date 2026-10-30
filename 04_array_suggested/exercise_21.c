#include <stdio.h>
#define N 10

int main()
{
    int A[N], B[N];
    for(int i = 0; i < N; i++)
    {
        printf("A | Position %d: ", i);
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < N; i++)
    {
        if(A[i] != 0)
        {
            B[i] = A[i];
        }
        else
        {
            B[i] = 1;
        }
    }

    for(int i = 0; i < N; i++)
    {
        printf("B | %d\n", B[i]);
    }
    return 0;
}