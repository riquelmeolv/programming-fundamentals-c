#include <stdio.h>

int sum(int n);

int main()
{
    int n, sumn;
    printf("Enter a number: ");
    scanf("%d", &n);

    sumn = sum(n);
    printf("A soma é: %d", sumn);

    return 0;
}

int sum(int n)
{
    int sum = 0;
    for(int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
} 