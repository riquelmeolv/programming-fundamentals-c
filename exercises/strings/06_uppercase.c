#include <stdio.h>

int main(void)
{
    char str[] = "c Programming Is Fun 123";
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
            // str[i] = toupper(str[i]);
        }

        i++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}