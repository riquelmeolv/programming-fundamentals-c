#include <stdio.h>

int main(void)
{
    int data[5] = {1, 3, 5, 7, 9};
    int *ptr = data;

    printf("Arra element at index 2 (Value should be 5):\n");
    for(int i = 2; i < 3; i++)
    {
        printf("1. Subscript notation: %d\n", data[i]);
        printf("2. Pointer notation(arr + 2): %d\n", *(data + i));
        printf("3. Pointer notation(ptr + 2): %d\n", *(ptr + i)); 
    }

    return 0;
}