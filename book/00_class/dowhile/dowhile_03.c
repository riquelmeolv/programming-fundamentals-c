#include <stdio.h>

int main()
{
    int n, soma = 0;
    do
    {
        printf("Informe n: ");
        scanf("%d", &n);
        soma += n;
    }while(n != 0);
    
    printf("Soma: %d\n", soma);
    return 0;
}