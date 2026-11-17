#include <stdio.h>

int main()
{
    int op;
    float n1, n2;
    do
    {
        printf("1 - Somar dois números\n"
            "2 - Multiplicar dois números\n"
            "3 - Verificar se um número é par ou ímpar\n"
            "0 - Sair\n");
            scanf("%d", &op);
    }while(op < 0 || op > 4);

    if(op == 0)
    {
        return 1;
    }
    else if(op == 1)
    {
        printf("Número 1: ");
        scanf("%f", &n1);
        printf("Número 2: ");
        scanf("%f", &n2);
        printf("A soma deles é: %d\n", n1 + n2);
    }
    else if(op == 2)
    {
        printf("Número 1: ");
        scanf("%f", &n1);
        printf("Número 2: ");
        scanf("%f", &n2);
        printf("A multiplicação deles é: %d\n", n1 + n2);
    }
    else
    {
        printf("Informe um número: ");
        scanf("%f", &n1);
        if((int)n1 % 2 == 0.0)
        {
            printf("Par\n");
        }
        else
        {
            printf("Ímpar\n");
        }
    }
    return 0;
}