#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "programming";
    char *start = str, *end = str, temp;

    printf("Original string: %s\n", str);
    int i, j = strlen(str) - 1;
    for(i = 0; i < j; i++, j--)
    {
        temp = *(start + i);
        *(start + i) = *(end + j);
        *(end + j) = temp;
    }
   
    printf("Reversed string: %s\n", str);
    
    return 0;
}