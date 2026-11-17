#include <stdio.h>

int main(void)
{
    char source[] = "Copy Me!";
    char destination[20];

    int i = 0;
    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    // Essential: Add the null terminator to the destination string
    destination[i] = '\0';
    
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return 0;
}