#include <stdio.h>

int main(void)
{
    char str[20];
    printf("Enter a binary string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (*(str + i) != '\0')
    {
        if(*(str + i) == '0')
        {
            *(str + i) = '1';
        }
        i++;
    }

    printf("The string: %s\n", str);
    
    return 0;
}