#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[] = "programmingisgreat";

    // Flag array for all 256 possible ASCII chars
    int seen[256] = {0};
    int read_index = 0;
    int write_index = 0;

    printf("Original: %s\n", str);

    while (*(str + read_index) != '\0')
    {
        unsigned current_char = *(str + read_index);

        // Check if the character has NOT been seen yet
        if(seen[current_char] == 0)
        {
            // 1. Mark as seen
            seen[current_char] = 1;

            // 2. Copy the character 
            *(str + write_index) = *(str + read_index);
            write_index++;
        }

        // Always move to the next character in the original string
        read_index++;
    }

    // Null-terminate the new string
    *(str + write_index) = '\0';
    
    printf("No duplicates: %s\n", str);

    return 0;
}