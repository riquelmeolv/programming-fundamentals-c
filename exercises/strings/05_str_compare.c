#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char str1[] = "apple";
    char str2[] = "apple";

    bool identical = true;

    int i = 0;
    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            identical = false;
        }

        i++;
    }

    if(str1[i] != '\0' || str2[i] != '\0')
    {
        identical = false;
    }

    if(identical) {
        printf("The strings are identical");
    }
    else {
        printf("The strings do not are identical");
    }
    return 0;
}