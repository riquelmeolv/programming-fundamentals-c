#include <stdio.h>

void print_array(int numbers[], int size);
void reverse(int *start, int *end);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    printf("Orignal array: ");
    print_array(numbers, size);

    int *start = numbers;
    int *end = numbers + size - 1;

    reverse(start, end);

    printf("Reverse array: ");
    print_array(numbers, size);

    return 0;
}

void print_array(int numbers[], int size)
{
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

void reverse(int *start, int *end)
{
    int temp;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}