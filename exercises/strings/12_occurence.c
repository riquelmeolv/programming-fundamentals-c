#include <stdio.h>

int main(void)
{
    char str[] = "programming";
    char target = 'g';

    int i = 0, index = -1;
    while (str[i] != '\0')
    {
        if(str[i] == target)
        {
            index = i;
            break;
        }
        i++;
    }

    if(index != -1){
        printf("First occurrence of '%c' found at index: %d\n", target, index);
    }
    else{
        printf("Character '%c' not found in the string.\n");
    }    
    return 0;
}