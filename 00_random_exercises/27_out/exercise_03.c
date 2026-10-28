#include <stdio.h>

int min(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter a number: ");
    scanf("%d", &n2);

    int menor;
    menor = min(n1, n2);
    printf("The minimum value is: %d\n", menor);

    return 0;
}

int min(int n1, int n2)
{
    if(n1 > n2)
    {
        return n2;
    }
    else
    {
        return n1;
    }
}