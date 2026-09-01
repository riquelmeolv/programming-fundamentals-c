#include <stdio.h>
int main()
{
    int I;
    float A, B, C;
    printf("Envie um número de 1 a 3: ");
    scanf("%d", &I);
    printf("Escreva 3 números diferentes: ");
    scanf("%f %f %f",&A, &B, &C);

    if(I == 1)
    {
        if(A > B && A > C)
        {
            if(B > C)
            {
                printf("A ordem crescente é: %.2f %.2f %.2f\n", C, B, A);
            }
            else
            {
                printf("A ordem crescente é: %.2f %.2f %.2f\n", B, C, A);
            }
        }
        else if(B > A && B > C)
        {
            if(A > C)
            {
                printf("A ordem crescente é: %.2f %.2f %.2f\n", C, A, B);
            }
            else
            {
                printf("A ordem crescente é: %.2f %.2f %.2f\n", A, C, B);
            }
        }
        else
        {
            if(A > B)
            {
                printf("A ordem crescente é: %.2f %.2f %.2f\n", B, A, C);
            }
            else
            {
                printf("A ordem crescente é: %.2f %.2f %.2f\n", A, B, C);
            }
        }
    }
    else if(I == 2)
    {
        if(A > B && A > C)
        {
            if(B > C)
            {
                printf("A ordem decrescente é: %.2f %.2f %.2f\n", A, B, C);
            }
            else
            {
                printf("A ordem decrescente é: %.2f %.2f %.2f\n", A, C, A);
            }
        }
        else if(B > A && B > C)
        {
            if(A > C)
            {
                printf("A ordem decrescente é: %.2f %.2f %.2f\n", B, A, C);
            }
            else
            {
                printf("A ordem decrescente é: %.2f %.2f %.2f\n", B, C, A);
            }
        }
        else
        {
            if(A > B)
            {
                printf("A ordem decrescente é: %.2f %.2f %.2f\n", C, A, B);
            }
            else
            {
                printf("A ordem decrescente é: %.2f %.2f %.2f\n", C, B, A);
            }
        }
    }
    else
    {
        if(A > B && A > C)
        {
            if(B > C)
            {
                printf("O maior fica no meio: %.2f %.2f %.2f\n", C, A, B);
            }
            else
            {
                printf("O maior fica no meio: %.2f %.2f %.2f\n", B, A, C);
            }
        }
        else if(B > A && B > C)
        {
            if(A > C)
            {
                printf("O maior fica no meio: %.2f %.2f %.2f\n", C, B, A);
            }
            else
            {
                printf("O maior fica no meio: %.2f %.2f %.2f\n", A, B, C);
            }
        }
        else
        {
            if(A > B)
            {
                printf("O maior fica no meio: %.2f %.2f %.2f\n", B, C, A);
            }
            else
            {
                printf("O maior fica no meio: %.2f %.2f %.2f\n", A, C, B);
            }
        }
    }

    return 0;
}