#include <stdio.h>

void increment_value(int *count);

int main(void)
{
    int count = 10;

    printf("Before fuction call, count = %d\n", count);
    increment_value(&count);
    printf("After fuction call, count = %d\n", count);

    return 0;
}

void increment_value(int *count)
{
    (*count)++;
}