#include <stdio.h>
#include <string.h>

void swap_str(char *str, int start, int end);
void swap_word(char *str);

int main(void)
{
    char str[] = "C programming is fun";
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    printf("Original: %s\n", str);
    swap_str(str, start, end);
    swap_word(str);
    printf("Reversed words: %s\n", str);

    return 0;
}

void swap_str(char *str, int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = *(str + start);
        *(str + start) = *(str + end);
        *(str + end) = temp;
        
        start++;
        end--;
    }
}

void swap_word(char *str)
{
    int start = 0;
    int end = 0;
    char temp;
    int i = 0;

    while (*(str + i) != '\0')
    {
        while(*(str + i) != ' ' && *(str + i) != '\0') {
            i++;
        }

        end = i - 1;
        while(start < end)
        {
            temp = *(str + start);
            *(str + start) = *(str + end);
            *(str + end) = temp;

            start++;
            end--;
        }

        if(*(str + i) == '\0')
        {
            break;
        }

        i++;
        start = i;
    }
}