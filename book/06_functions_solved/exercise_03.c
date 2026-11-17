#include <stdio.h>
int sumdiv(int a, int b, int c);

int main()
{
    int a, b, c, result;
    printf("Informe o número A maior que 1: ");
    scanf("%d", &a);
    printf("Informe o número B: ");
    scanf("%d", &b);
    printf("Informe o número C: ");
    scanf("%d", &c);

    result = sumdiv(a, b, c);
    printf("Resultado da soma de inteiros divisores de A entre B e C: %d\n", result);

    return 0;
}

int sumdiv(int a, int b, int c)
{
    int sumdiv = 0;
    for (int i = b; i <= c; i++)
    {
        if(i % a == 0)
        {
            sumdiv += i;
        }
    }
    return sumdiv;    
}