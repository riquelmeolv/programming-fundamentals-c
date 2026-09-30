#include <stdio.h>

int main()
{
    int n, result;
    printf("Informe o número: ");
    scanf("%d", &n);

    result = 0;
    if(n == 0)
    {
        result = 1;
    }

    while (n >= 1)
    {
        if(n % 10 == 0 || n % 10 != 0)
        {
            result++;
            n = n / 10;
        }
    }
    
    printf("Esse número tem %d dígitos.\n", result);
    
    return 0;
}