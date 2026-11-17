#include <stdio.h>

int main(void)
{
    char str1[50] = "Hello "; 
    char str2[] = "World!";
    int i, j;

    for(i = 0; str1[i] != '\0'; i++);

    for(j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }
    
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}