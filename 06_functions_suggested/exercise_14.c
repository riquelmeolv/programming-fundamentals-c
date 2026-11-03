#include <stdio.h>
#define N 3

void aux(int *X, int *A, int *B, int *contn, int *contp);

int main()
{
    int X[N], A[N], B[N];
    for(int i = 0; i < N; i++)
    {
        printf("Enter integer %d: ", i);
        scanf("%d", &X[i]);
    }

    int contn, contp;
    aux(X, A, B, &contn, &contp);
    for(int i = 0; i < contp; i++)
    {
        printf("A | %d\n", A[i]);
    }

    for(int i = 0; i < contn; i++)
    {
        printf("B | %d\n", B[i]);
    }

    return 0;
}

void aux(int *X, int *A, int *B, int *contn, int *contp)
{
    *contp = 0;
    *contn = 0;
    for(int i = 0; i < N;i++)
    {
        if(X[i] > 0)
        {
            A[*contp] = X[i];
            (*contp)++;
        }
        else
        {
            B[*contn] = X[i];
            (*contn)++;
        }
    }
}