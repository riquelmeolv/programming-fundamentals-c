#include <stdio.h>

int main()
{
    int A[5], B[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Vetor A | Posição %d: ", i + 1);
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Vetor B | Posição %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    int result[10], contA = 0, contB = 0;
    for(int i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
        {
            result[i] = B[contB];
            contB++;
        }
        else
        {
            result[i] = A[contA];
            contA++;
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("Posição %d | Número: %d\n", i, result[i]);
    }
    
    return 0;
}