#include <stdio.h>

// Achar quantas letra a string possui

int count_str(char *str);

int main(void)
{
    char str[20];
    printf("Enter a name: ");
    fgets(str, 20, stdin);

    int letters = count_str(str);
    printf("The number of letters is: %d\n", letters);

    return 0;
}

int count_str(char *str)
{
    int count = 0, letters = 0;
    while(*(str + count) != '\0')
    {
        if((*(str + count) >= 'a' && *(str + count) <= 'z') ||
           (*(str + count) >= 'A' && *(str + count) <= 'Z'))
        {
            letters++;
        }
        count++;
    }
    return letters;
}