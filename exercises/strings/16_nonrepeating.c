#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[] = "aabcbccs";
    int freq[26] = {0};

    char *read_index = str, ch;
    int index;

    while (*read_index != '\0')
    {
        ch = tolower(*read_index);

        // Verifica a partir de (letras -> minúsculas) 
        if(ch >= 'a' && ch <= 'z')
        {
            // Index leva para a posição que representa a letra e soma 1
            index = ch - 'a';
            freq[index]++;
        }

        read_index++;        
    }

    /*
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] == 1)
        {
            printf("First non-repeating character: '%c'", (char)('a' + i));
            break;
        }
    }
    */

    // Volta para a posição inicial
    read_index = str;

    while (*read_index != '\0')
    {
        // Unsigned char é para precaução
        ch = tolower((unsigned char)(*read_index));

        // [ch - 'a'] vai no acumulador da letra
        if(ch >= 'a' && ch <= 'z' && freq[ch - 'a'] == 1)
        {
            printf("First non-repeating character: '%c'", *read_index);
            break;
        }

        read_index++;
    }

    return 0;
}