#include <stdio.h>

int main()
{
    int n, soma;

    n = 100;
    soma = 0;
    while (n >= 1)
    {
        soma += n;
        n--;
    }
    
    printf("A soma de 1 a 100: %d\n", soma);
    return 0;
}