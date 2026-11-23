#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pointer = malloc(1);
    *pointer = 108;

    printf("Value stored dynamically: %d\n", *pointer);
    printf("Memomy adress allocated: %zu\n", pointer);

    free(pointer);
    return 0;
}