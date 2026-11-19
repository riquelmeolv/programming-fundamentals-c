#include <stdio.h>

int sum_array(int *num, int lenght);

int main(void)
{
    int numbers[5] = {10, 5, 8, 2, 15};
    int sum = sum_array(numbers, 5);

    printf("The sum of array elements is: %d\n", sum);
    return 0;
}

int sum_array(int *num, int lenght)
{
    int sum = 0;
    for(int i = 0; i < lenght; i++)
    {
        sum += *(num + i);
    }

    return sum;
}