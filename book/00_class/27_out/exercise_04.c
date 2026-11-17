#include <stdio.h>

int exponent(int base, int exp);

int main()
{
    int base, exp, result;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter a exponent: ");
    scanf("%d", &exp);

    result = exponent(base, exp);
    printf("The resulted is: %d\n", result);
}

int exponent(int base, int exp)
{
    int result = 1;
    for(int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}
