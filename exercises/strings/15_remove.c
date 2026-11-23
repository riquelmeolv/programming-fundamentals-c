#include <stdio.h>

int main(void)
{
    char str[] = "eExxammpelle";
    char char_to_remove = 'e';

    char *read_index = str;
    char *write_index = str;

    while (*read_index != '\0')
    {
        if(*read_index != char_to_remove)
        {
            *write_index = *read_index;
            write_index++;
        }
        
        read_index++;
    }

    *write_index = '\0';

    printf("String after removing '%c': %s\n", char_to_remove, str);
    
    return 0;
}