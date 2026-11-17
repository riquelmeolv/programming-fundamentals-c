#include <stdio.h>
#define vector 2

void descending(int *A, int *B, int *C);

int main()
{
    int A[vector], B[vector], C[vector * 2];
    descending(A, B, C);

    printf("Vector C: ");
    for(int i = 0; i < vector * 2; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

void descending(int *A, int *B, int *C)
{
    printf("=== VECTOR A ===\n");
    for(int i = 0; i < vector; i++)
    {
        printf("Position %d: ", i);
        scanf("%d", &A[i]);
    }
    printf("=== VECTOR B ===\n");
    for(int j = 0; j < vector; j++)
    {
        printf("Position %d: ", j);
        scanf("%d", &B[j]);
    }

    for(int i = 0; i < vector * 2; i++)
    {
        if(i < vector)
        {
            C[i] = A[i];
        }
        else
        {
            C[i] = B[i - vector];
        }
    }

    int temp;
    for(int i = 0; i < vector - 1; i++)
    {
        for(int j = 0; j < (vector - 1) - i; j++)
        {
            if(C[j] < C[j + 1])
            {
                temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }
}