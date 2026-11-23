#include <stdio.h>

int custom_strlen(char *pointer);

int main(void)
{
    char myString[] = "Hello Pointers!";
    char *pointer = myString;

    int count = custom_strlen(pointer);

    printf("The string is: %s\n", myString);
    printf("Lenght using custom_strlen: %d\n", count);
    
    return 0;
}

int custom_strlen(char *pointer)
{
    int count = 0;
    while (*pointer != '\0')
    {
        count++;
        pointer++;
    }

    return count;
}