#include <stdio.h>

int operation(int n1, int n2, char character);

int main()
{
    int n1, n2, result;
    char character;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter a second number: ");
    scanf("%d", &n2);
    printf("Enter a character(+ or *): ");
    scanf(" %c", &character);
    if(character != '+' && character != '*')
    {
        printf("Invalid character\n");
        return 1;
    }

    result = operation(n1, n2, character);

    printf("The resulted is: %d\n", result);

    return 0;
}

int operation(int n1, int n2, char character)
{
    if(character == '+')
    {
        return n1 + n2;
    }
    else
    {
        return n1 * n2;
    }
}