#include <stdio.h>

int main()
{
    int n, cont;
    printf("Informe um número: ");
    scanf("%d", &n);
    
    cont = 0;
    int i = n;
    while (i >= 1)
    {
        if(n % i == 0)
        {
            cont++;
        }
        i--;
    }
    if(cont <= 2)
    {
        printf("Primo\n");
    }
    else
    {
        printf("Não é primo\n");
    }
    
    return 0;
}