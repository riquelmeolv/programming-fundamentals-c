#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *pointer = arr, n;

    printf("Array elements using pointers arithmetic:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *(pointer + i));
    }
    return 0;
}