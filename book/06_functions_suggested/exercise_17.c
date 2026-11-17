#include <stdio.h>
int mdc(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);

    int gmd = mdc(n1, n2);
    printf("O mdc é: %d\n", gmd);

    return 0;
}

int mdc(int n1, int n2)
{
    int resto;
    resto = n1 % n2;
    while(resto != 0)
    {
        n1 = n2;
        n2 = resto;
        resto = n1 % n2;
    }
    return n2;
}