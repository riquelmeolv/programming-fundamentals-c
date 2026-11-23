#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char sentence[] = "The quick brown fox Jumps over the lazy dog";
    int vowels = 0;
    char *sen = sentence, temp;

    while (*sen != '\0') {
        temp = tolower(*sen);
        if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
            vowels++;
        }

        sen++;
    }

    printf("Sentence: %s\n", sentence);
    printf("Total number of vowels: %d\n", vowels);
    
    return 0;
}