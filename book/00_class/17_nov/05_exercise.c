#include <stdio.h>

int main(void)
{
    char str1[20], str2[20];

    printf("Enter string 1: ");
    fgets(str2, 20, stdin);
    printf("Enter a string 2: ");
    fegets(str2, 20, stdin);

    return 0;
}

void diff(char *str1, char *str2)
{
    int diff = 0, count = 0;
    while(str1[count] != '\0' || str2[count] != '\0')
    {

        
    }

}