#include <stdio.h>

int main(void)
{
    char str[20];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while(*(str + i) != '\0')
    {
        if(*(str + i) >= 'A' && *(str + i) <= 'Z')
        {
            *(str + i) = *(str + i) - 32;
        }
        i++;
    }

    printf("String Lowercase: %s\n", str);

    return 0;
}