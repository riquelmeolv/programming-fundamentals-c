#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str1[] = "12345";
    char str2[] = "123a45";

    int len1, len2;
    char *pstr1 = str1, *pstr2 = str2;
    while(isdigit(*(pstr1)) && *(pstr1) != '\0')
    {
        pstr1++;
    }
    while(isdigit(*(pstr2)) && *(pstr2) != '\0')
    {
        pstr2++;
    }

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(pstr1 - str1 == len1)
    {
        printf("String: %s\n", str1);
        printf("Result: Contains only digit.\n");
    }
    else if(pstr2 - str2 == len2)
    {
        printf("String: %s\n", str2);
        printf("Result: Contains only digit.\n");
    }
    else
    {
        printf("Result: Contains non-digit characters.\n");
    }
    return 0;
}