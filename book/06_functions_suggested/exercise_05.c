#include <stdio.h>

void posneg(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    posneg(number);

    return 0;
}

void posneg(int number)
{
    if(number >= 0)
    {
        printf("Positive!\n");
    }
    else
    {
        printf("Negative!\n");
    }
}