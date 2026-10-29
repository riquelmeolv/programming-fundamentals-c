#include <stdio.h>
#define N 10

int main()
{
    int A[N], B[N], C[N * 2];
    for(int i = 0; i < N;i++)
    {
        printf("A %d: ", i + 1);
        scanf("%d", &A[i]);

        printf("B %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    int cont = 0;
    for(int i = 0; i < N * 2; i++)
    {
        if(i < N)
        {
            C[i] = A[i];
        }
        else
        {
            C[i] = B[i];
        }
    }
    
    int max = C[0], temp;
    for(int i = 0; i < N * 2 - 1; i++)
    {
        for(int j = 0; j < N * 2 - i; j++)
        {
            if(C[j] > max)
            {
                max = C[j];
            }
        }
        
        
    }
    return 0;
}