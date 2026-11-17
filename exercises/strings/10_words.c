#include <stdio.h>

int main(void)
{
    char str[] = "This is a test string";
    int i = 0, spaces = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            spaces++;
        }
        i++;
    }

    int words = spaces + 1;

    printf("The string is: '%s'\n", str);
    printf("The number of words: %d\n", words);
    
    return 0; 
}