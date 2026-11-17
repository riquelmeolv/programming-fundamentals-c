#include <stdio.h>

int main(void)
{
    char str[] = "Hello World!";

    int i = 0, cont = 0;
    while(str[i] != '\0')
    {
        cont++;
        i++;
    }

    printf("The string is: %s\n", str);
    printf("The lenght of the string is: %d\n", cont);
    
    return 0;
}