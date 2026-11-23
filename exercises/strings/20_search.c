#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int find(int i, char *str, char *needle);

int main(void)
{
    char haystack[] = "This is a search test";
    char needle[] = "search";

    /* Modo nutella
    char *str = haystack, *need = needle;
    int index, i = 0;
    while (*(str + i) != '\0')
    {
        if(*(str + i) == *needle && *(str + i + 1) == *(needle + 1))
        {
            index = i;
        }
        i++;
    }*/

    bool found = false;
    int start_index = -1;
    int i, j;

    for(i = 0; *(haystack + i) != '\0'; i++) {
        for(j = 0; *(needle + j) != '\0'; j++) {
            if(*(haystack + i + j) == '\0' || *(haystack + i + j) != *(needle + j)) {
                break;
            }
        }

        if(*(needle + j) == '\0') {
            found = true;
            start_index = i;
        }

        i++;
    }

    printf("Haystack: %s\n", haystack);
    printf("Needle: %s\n", needle);
    if(found) {
        printf("Substring found at index: %d\n", start_index);
    } else {
        printf("Subtring not found.\n");
    }
    
    
    return 0;
}
