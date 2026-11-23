#include <stdio.h>

int main(void)
{
    char *message = "C Pointers";

    while (*message != '\0')
    {
        printf("%c\n", *message);
        message++;
    }
    
    return 0;
}