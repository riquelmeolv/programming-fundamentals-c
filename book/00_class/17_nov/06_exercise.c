#include <stdio.h>

int main(void)
{
    char str[20];
    printf("Enter a binary string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, count = 0;;
    while (str[i] != '\0')
    {
        if(str[i] == '1')
        {
            count++;
        }
        i++;
    }

    printf("The number of 1's is: %d\n", count);
    
    return 0;
}