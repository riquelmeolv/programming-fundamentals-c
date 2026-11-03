#include <stdio.h>

int fatorial(int value);

int main()
{
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);

    int fat = fatorial(value);
    printf("Fatorial: %d\n", fat);

    return 0;
}

int fatorial(int value)
{
    int fat = 1;
    for(int i = 1; i <= value; i++)
    {
        fat *= i;
    }

    return fat;
}