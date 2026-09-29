#include <stdio.h>

int main()
{
    int n, resultado;
    printf("Informe um número: ");
    scanf("%d", &n);

    for(int i = 0; i <= 10; i++)
    {
        resultado = n * i;
        printf("%d * %d = %d\n", n, i, resultado);
    }
    return 0;
}