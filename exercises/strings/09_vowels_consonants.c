#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[] = "Programming In C is fun.";
    int vowels = 0, consonants = 0;
    int i = 0;
    char letter;
    
    while(str[i] != '\0')
    {
        letter = tolower(str[i]); // Convert to lowercase for simplified check
        
        // Check if the character is an alphabet
        if(letter >= 'a' && letter <= 'z')
        {
            if(letter == 'a'||letter == 'e'||letter == 'i'||letter == 'o'|| letter == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            } 
        }
        i++;
    }

    printf("String: %s\n", str);
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}