#include <stdio.h>
int main()
{
    int number;
    printf("Envie 1 número maior que 0: ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("O número é par.");
    }
    else
    {
        printf("O número e ímpar.");
    }

    return 0;
}