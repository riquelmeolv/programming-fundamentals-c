#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char str1[] = "listen";
    char str2[] = "silent";
    int freq[26] = {0};
    int i = 0;
    bool anagram = true;

    char diff;
    // 1. Increment counts for str1
    while(*(str1 + i) != '\0') {
        if(*(str1 + i) >= 'a' && *(str1 + i) <= 'z') {
            diff = *(str1 + i) - 'a';
            freq[diff]++;
        }
        i++;
    }

    i = 0;
    // Decrements counts for str2
    while (*(str2 + i) != '\0') {
        diff = *(str2 + i) - 'a';
        if(*(freq + diff) == 1) {
            *(freq + diff) = 0;
        }
        i++;
    }

    // Check frequency array
    for(i = 0; i < 26; i++) {
        if(*(freq + i) != 0) {
            anagram = false;
        }
    }

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    if(anagram) {
        printf("Result: They are anagrams.\n");
    } else {
        printf("Result: They are not anagrams.\n");
    }
    
    return 0;
}