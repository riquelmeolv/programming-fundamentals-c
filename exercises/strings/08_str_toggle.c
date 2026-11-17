#include <stdio.h>

int main(void)
{
    char str[] = "HeLlO wOrLd 123";
    int diff = 'a' - 'A';
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - diff;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + diff;
        }

        i++;
    }

    printf("Toggle string: %s\n", str);
    return 0;
}