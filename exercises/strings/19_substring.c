#include <stdio.h>

int main(void)
{
    char source[] = "Programming In C";
    int start_index = 0; // Start from 'r' (index 4)
    int length = 7;      // Extract 7 characters ("ramming")
    char destination[15]; // Destination buffer size

    int i = 0;
    while (*(source + i) != '\0')
    {
        if(*(source + i) == 'P')
        {
            start_index = i;
        }
        i++;
    }

    for(i = 0; i < length; i++)
    {
        destination[i] = *(source + start_index);
        start_index++;
    }

    destination[i + 1] = '\0';
    
    printf("Source: %s\n", source);
    printf("Substring: %s\n", destination);
    
    return 0;
}