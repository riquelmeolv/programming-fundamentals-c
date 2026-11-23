#include <stdio.h>

int main(void)
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (*(str + i) != '\0')
    {
        *(str + i) = *(str + i) + 1;
        i++;
    }

    printf("The string plus one: %s\n", str);
    
    return 0;
}