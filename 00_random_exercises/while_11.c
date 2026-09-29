#include <stdio.h>

int main()
{
    int n, temp, result;
    printf("Informe um inteiro: ");
    scanf("%d", &n);

    result = 0;
    while(n > 0)
    {
        temp = n % 10;
        result = result * 10 + temp;
        n = n / 10;
    }

    printf("Número: %d\n", result);

    return 0;
}