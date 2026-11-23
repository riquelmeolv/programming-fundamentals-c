#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 10;
    float *ptr =  NULL;

    ptr = (float *)calloc(count, sizeof(float));
    if(ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Verifying calloc initialization (sholud be 0.00):\n");
    printf("First element: %.2f\n",  *ptr);
    printf("Last element: %.2f\n", *(ptr + 9));

    *(ptr + 5) = 3.14;

    printf("Element at index 5 after assignment: %.2f\n", *(ptr + 5));

    free(ptr);
    return 0;
}