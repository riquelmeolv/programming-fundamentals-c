#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[] = "  This  is   a  test.   ";
    char *read = str, *write = str;

    while(isspace(*read))
    {
        read++;
    }

    while(*read != '\0')
    {
        if(write != str && !isspace(*(read - 1)))
        {
            *write = ' ';
            write++;
        }
        else
        {
            *write = *read;
            write++;
        }
        read++;
    }

    while(write != str && isspace(*(read - 1)))
    {
        write--;
    }

    *write = ' ';

    printf("Normalized string: |%s|\n", str);
    
    return 0;
}