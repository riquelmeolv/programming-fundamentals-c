#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20], str2[20];
    printf("Enter a string 1: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a string 2: ");
    fgets(str2, sizeof(str2), stdin);

    int n = strlen(str);

    // Remove o '\n', se ele foi armazenado
    if (n > 0 && str[n - 1] == '\n')
    {
        str[n - 1] = '\0';
        n--;
    }

    n = strlen(str);

    // Remove o '\n', se ele foi armazenado
    if (n > 0 && str2[n - 1] == '\n')
    {
        str2[n - 1] = '\0';
        n--;
    }

    int i = 0, c1 = 0, c2 = 0;
    while(*(str + i) != '\0')
    {
        c1 += *(str + i);
        i++;
    }

    i = 0;
    while(*(str2 + i) != '\0')
    {
        c2 += *(str2 + i);
        i++;
    }

    if(c1 < c2)
    {
        printf("String 1 Fisrt.\n");
        printf("c1: %d\n", c1);
    }
    else if(c2 < c1)
    {
        printf("String 2 Fisrt.\n");
        printf("c2: %d\n", c2);
    }
    else
    {
        printf("Draw.\n");
    }

    return 0;
}