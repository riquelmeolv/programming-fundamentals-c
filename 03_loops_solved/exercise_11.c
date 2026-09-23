#include <stdio.h>

// Inteiro > 1
// Primo ou não e mostre
// For()
int main()
{
    int n, cont;
    printf("Informe o número e veja se ele é primo: ");
    scanf("%d", &n);

    cont = 0;
    for(int i = n; i >= 1; i--)
    {
        if(n % i == 0)
        {
            cont++;
        }
    }

    if(cont == 2)
        {
            printf("Primo\n");
        }
        else if(cont > 2)
        {
            printf("Não primo\n");
        }
        else
        {
            printf("Número inválido\n");
        }
    return 0;
}