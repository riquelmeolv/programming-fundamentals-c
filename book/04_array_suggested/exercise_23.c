#include <stdio.h>
#define N 5
int main()
{
    int A[N], B[N], C[N];
    for(int i = 0; i < N; i++)
    {
        printf("A | Position %d: ", i);
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < N; i++)
    {
        printf("B | Position %d: ", i);
        scanf("%d", &B[i]);
    }

    for(int i = 0; i < N; i++)
    {
        C[i] = A[i] - B[N - 1 - i];
    }

    for(int i = 0; i < N; i++)
    {
        printf("C | %d\n", C[i]);
    }
    return 0;
}