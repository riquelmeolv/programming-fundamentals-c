#include <stdio.h>

int sum(int n1, int n2);

int main()
{
    int n1, n2, sumfinal;
    printf("Informe o número 1: ");
    scanf("%d", &n1);
    printf("Informe o número 2: ");
    scanf("%d", &n2);

    sumfinal = sum(n1, n2);
    printf("Soma final: %d\n", sumfinal);
    return 0;
}

int sum(int n1, int n2)
{
    int sum = 0;
    for(int i = n1 + 1; i < n2; i++)
    {
        sum += i;
    }
    return sum;
}