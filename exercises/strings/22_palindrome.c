#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char str[] = "sopapos";
    char *a = str, *b = str;
    int len = strlen(str);
    bool palindrome = true;

    int i, j = len - 1;
    for(i = 0; i < j; i++, j--)
    {
        if(*(a + i) != *(b + j))
        {
            palindrome = false;
            break;
        }
    }

    printf("String: %s\n", str);
    if(palindrome) {
        printf("Result: It is a palindrome.\n");
    } else {
        printf("Result: Is is not a palindrome.\n");
    }
    return 0;
}