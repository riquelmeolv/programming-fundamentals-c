#include <stdio.h>

int power(int x, int z);

int main()
{
    int x, z;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Z: ");
    scanf("%d", &z);

    int result = power(x, z);
    printf("The resulted is: %d\n", result);

    return 0;
}

int power(int x, int z)
{
    int result = 1;
    for(int i = 0; i < z; i++)
    {
        result *= x;
    }

    return result;
}