#include <stdio.h>

int main(void)
{
    char str[50], c;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to count: ");
    scanf(" %c", &c);

    int i = 0, count = 0;
    while(str[i] != '\0')
    {
        if(str[i] == c)
        {
            count++;
        }
        i++;
    }

    printf("The character '%c' appears %d times in the string", c, count);

    return 0;
}