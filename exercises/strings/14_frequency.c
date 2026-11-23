#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[] = "Jessa";
    int freq[26] = {0}; // Initialize all 26 counters to zero
    
    int i = 0, index;
    char ch;
    while (*(str + i) != '\0')
    {
        ch = tolower(*(str + i));
        if(ch >= 'a' && ch <= 'z')
        {
            index = ch - 'a';
            freq[index]++;
        }
        i++;
    }
    
    printf("Character Frequencies(a - z):\n");
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            printf("'%c': %d\n", (char)('a' + i), freq[i]);
        }
    }
   
    return 0;
}