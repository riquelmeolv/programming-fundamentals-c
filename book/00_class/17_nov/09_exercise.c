#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    char temp;
    printf("String within vowels: ");
    while(*(str + i) != '\0')
    {
        
        if(*(str + i) != 'a' && *(str + i) != 'e' &&
           *(str + i) != 'i' && *(str + i) != 'o' &&
           *(str + i) != 'u' && *(str + i) != 'A' && 
           *(str + i) != 'E' && *(str + i) != 'I' && 
           *(str + i) != 'O' && *(str + i) != 'U')
        {
           printf("%c", *(str + i));
        }
        i++;
    }
    
    return 0;
}