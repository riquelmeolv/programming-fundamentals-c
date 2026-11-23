#include <stdio.h>

void str_compare(char *str1, char *str2);


int main(void)
{
    char str1[20], str2[20];

    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter a string 2: ");
    fgets(str2, sizeof(str2), stdin);

    str_compare(str1, str2);

    return 0;
}

void str_compare(char *str1, char *str2)
{
    int diff = 0, count = 0;

    while(*(str1 + count) != '\0' && *(str2 + count) != '\0')
    {
        if(*(str1 + count) != *(str2 + count))
        {
            diff = 1;
            break;
        }
        count++;
    }
    
    if(*(str1 + count) != '\0' || *(str2 + count) != '\0')
    {
        diff = 1;
    }

    if(diff == 1)
    {
        printf("The strings are not equal.\n");
    }
    else
    {
        printf("The strings are equal.\n");
    }
}