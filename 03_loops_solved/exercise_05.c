#include <stdio.h>

int main()
{
    float n, x, s, expoente;
    printf("Informe a quantidade de termos: ");
    scanf("%f", &n);
    printf("Informe o valor de x: ");
    scanf("%f", &x);

    expoente = 1;
    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            expoente *= x;
        }
    }
    printf("%.1f\n", expoente);
    return 0;
}