#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20], l1, l2;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    // Remove o '\n', se ele foi armazenado
    if (n > 0 && str[n - 1] == '\n')
    {
        str[n - 1] = '\0';
        n--;
    }

    printf("Enter L1: ");
    scanf("%c", &l1);
    fflush(stdin);
    printf("Enter L2: ");
    scanf(" %c", &l2);

    int i = 0;
    while(*(str + i) != '\0')
    {
        if(*(str + i) == l1)
        {
            *(str + i) = l2;
        }
        i++;
    }

    printf("String: %s\n", str);
    return 0;
}