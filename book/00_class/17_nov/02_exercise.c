#include <stdio.h>

// Mostrar o nome se começar com A ou a

int main(void)
{
    char name[20];
    printf("Enter a name: ");
    fgets(name, 20, stdin);

    if(name[0] == 'a' || name[0] == 'A')
    {
        printf("Name: %s\n", name);
    }
    return 0;
}