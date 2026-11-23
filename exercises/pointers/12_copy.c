#include <stdio.h>

void custom_strcopy(char *src, char *dest);

int main(void)
{
    char source[] = "Pointer Mastery";
    char destination[50]; // Ensure destination buffer is large enough
    char *src = source, *dest = destination;

    custom_strcopy(src, dest);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}

void custom_strcopy(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

}