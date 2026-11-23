#include <stdio.h>

int main(void)
{
    char str[20], letter;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int vowels = 0;
    while(*(str + i) != '\0')
    {
        if(*(str + i) == 'a' || *(str + i) == 'e' ||
           *(str + i) == 'i' || *(str + i) == 'o' ||
           *(str + i) == 'u' || *(str + i) == 'A' || 
           *(str + i) == 'E' || *(str + i) == 'I' || 
           *(str + i) == 'O' || *(str + i) == 'U')
        {
            vowels++;
        }
        i++;
    }

    printf("The number of vowels is: %d\n", vowels);
    printf("Enter a letter(vowels ou consonant): ");
    scanf("%c", &letter);

    i = 0;
    while (*(str + i) != '\0')
    {
        if(*(str + i) == 'a' || *(str + i) == 'e' ||
           *(str + i) == 'i' || *(str + i) == 'o' ||
           *(str + i) == 'u' || *(str + i) == 'A' || 
           *(str + i) == 'E' || *(str + i) == 'I' || 
           *(str + i) == 'O' || *(str + i) == 'U')
        {
            *(str + i) = letter;
        }
        i++;
    }

    printf("String: %s\n", str);
    
    return 0;
}