#include <stdio.h>

int main(void)
{
    char text[20];

    printf("Enter a string: ");
    fgets(text, 20, stdin);

    printf("String: %s\n", text);

    return 0;
}