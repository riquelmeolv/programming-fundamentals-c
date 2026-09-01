#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, soma, raiz, op;
    printf("Escolha uma das seguintes opções:\n1. Somar dois números\n2. Raiz quadrada de um número\n");
    printf("Resposta: ");
    scanf("%d", &op);

    if(op == 1)
    {
        printf("Envie os dois números: ");
        scanf("%d %d", &n1, &n2);
        soma = n1 + n2;
        printf("A soma dos números é: %d", soma);
    }
    else
    {
        printf("Envie 1 número: ");
        scanf("%d", &n1);
        raiz = sqrt(n1);
        printf("A raiz quadrada é: %d\n", raiz);
    }

    return 0;
}