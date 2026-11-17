#include <stdio.h>

float media(float n1, float n2, float n3, char letter);

int main()
{
    float n1, n2, n3;
    char letter;

    printf("Informe a nota N1: ");
    scanf("%f", &n1);
    printf("Informe a nota N2: ");
    scanf("%f", &n2);
    printf("Infrome a nota N3: ");
    scanf("%f", &n3);

    printf("Informe a forma de avaliação(A ou P): ");
    scanf(" %c", &letter);
    if(letter != 'A' && letter != 'P')
    {
        printf("Char inválido.\n");
        return 1;
    }

    float mediafinal;
    mediafinal = media(n1, n2, n3, letter);
    printf("A média foi: %.1f\n", mediafinal);

    return 0;
}

float media(float n1, float n2, float n3, char letter)
{
    float media;
    if(letter == 'A')
    {
        media = (n1 + n2 + n3) / 3;
    }
    else
    {
        media = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    }

    return media;
}