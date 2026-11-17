#include <stdio.h>

int main(void)
{
    char str[] = "C PrOgRaMmInG Is AwEsOmE";

    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - ('A' - 'a');
            // str[i] = tolower(str[i]);
        }

        i++;
    }

    printf("Lowercase string: %s\n", str);
    return 0;
}