#include <stdio.h>

// Achar o tamanho da string

int main(void)
{
    char str[] = "Riquelme";

    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }   

    printf("The string is: %s\n", str);
    printf("The lenght of the string is: %d\n", count);
    
    return 0;
}