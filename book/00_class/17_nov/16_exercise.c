#include <stdio.h>

int main(void)
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while(*(str + i) != '\0')
    {
        if(*(str + i) >= 'a' && *(str + i) <= 'z' || *(str + i) >= 'A' && *(str + i) <= 'Z')
        {
            *(str + i) += 3;
        }
        i++;
    }

    printf("Encoded String: %s\n", str);
    return 0;
}