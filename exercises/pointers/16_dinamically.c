#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 5;
    int *array = malloc(count * sizeof(int));
    if(array == NULL){
        return 1;
    }

    for(int i = 0; i < count; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", array + i);
    }

    printf("Stored elements are: ");
    for(int i = 0; i < count; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    free(array);
    return 0;
}