#include <stdio.h>

int main()
{
    int op;
    do
    {
        printf("1 - Dizer olá\n2 - Dizer tchau\n0 - Sair\n");
        printf("Resposta: ");
        scanf("%d", &op);
    } while (op > 2 || op < 0);
    
    if(op == 1)
    {
        printf("Olá\n");
    }
    else if(op == 2)
    {
        printf("Tchau\n");
    }
    else
    {
        return 1;
    }
    return 0;
}