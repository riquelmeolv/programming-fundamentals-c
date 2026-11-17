#include <stdio.h>

float sum(int n);

int main()
{
    int n;
    float s;
    printf("Informe um número n: ");
    scanf("%d", &n);

    s = sum(n);
    printf("Valor final: %.1f", s);
    return 0;
}

float sum(int n)
{
    float s = 1, fat;
    for(int i = 1; i <= n; i++)
    {
        fat = 1;
        for(int j = 1; j <= i; j++)
        {
            fat = fat * j;
        }

        s += 1 / fat;
    }
    return s;
}