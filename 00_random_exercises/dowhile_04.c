#include <stdio.h>

int main()
{
    int n, cont = 0;
    do
    {
        printf("Número: ");
        scanf("%d", &n);
        
    }while(n < 0);

    if(n > 0)
    {
        cont++;
        n = n / 10;
    }
    else
    {
        cont = 1;
    }

    printf("%d Digítos\n", cont);
    return 0;
}