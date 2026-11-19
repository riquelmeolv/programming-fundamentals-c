#include <stdio.h>

// Mostrar as 4 primeiras letra do nome

int main(void)
{
    char name[20];

    printf("Enter a name: ");
    fgets(name, 20, stdin);

    int i = 0;
    printf("Name: ");
    while(i < 4)
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");

    return 0;
}