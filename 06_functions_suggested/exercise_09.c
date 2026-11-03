#include <stdio.h>

int div(int value);

int main()
{
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    int sumdiv;
    sumdiv = div(value);

    printf("The sum of all dividers: %d\n", sumdiv);

    return 0;
}

int div(int value)
{
    int sum = 0;
    for(int i = 1; i <= value; i++)
    {
        if(value % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}