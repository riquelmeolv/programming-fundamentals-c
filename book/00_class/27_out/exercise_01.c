#include <stdio.h>

int posneg(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    posneg(number);

    return 0;
}

int posneg(int number)
{
    if(number % 2 == 0)
    {
        printf("Par!\n");
        return 1;
    }
    else
    {
        printf("Ímpar!\n");
        return 0;
    }
}