#include <stdio.h>
#define N 3

void intersec(int *A, int *B);

int main()
{
    int A[N], B[N];
    for(int i = 0; i < N; i++)
    {
        printf("A | ");
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < N; i++)
    {
        printf("B | ");
        scanf("%d", &B[i]);
    }

    intersec(A, B);

    return 0;
}

void intersec(int *A, int *B)
{
    printf("Interseção: \n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(A[i] == B[j])
            {
                printf("%d ", A[i]);
            }

        }
        printf("\n");
    }
}