#include <stdio.h>

int main(void)
{
    int num = 100;
    int *ptr;

    ptr = &num;

    printf("Original value of num: %d\n", num);
    *ptr = 500;
    printf("New value of num after pointer assignment: %d\n", num);

    return 0;
}