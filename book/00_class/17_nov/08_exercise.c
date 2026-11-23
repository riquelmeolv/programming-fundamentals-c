#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];
    printf("Enter a word: ");
    fgets(str, sizeof(str), stdin);

    int i = strlen(str);

    // Remove o '\n', se ele foi armazenado
    if (i > 0 && str[i - 1] == '\n')
    {
        str[i - 1] = '\0';
        i--;
    }

    i--; // Está em \0, vai para o último índice útil.
 
    char temp;
    for(int j = 0; j < i; j++)
    {
        temp = *(str + j);
        *(str + j) = *(str + i);
        *(str + i) = temp;
        i--;
    }

    printf("Reverse string: %s\n", str);

    return 0;
}