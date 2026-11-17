#include <stdio.h>

int main()
{
    float n1, n2, n3, np, media;

    printf("Enter a note 1: ");
    scanf("%f", &n1);
    printf("Enter a note 2: ");
    scanf("%f", &n2);
    printf("Enter a note 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Média: %.2f\n", media);

    if(media >=7)
    {
        printf("Aprovado\n");
    }
    else if(media < 3)
    {
        printf("Reprovado\n");
    }
    else
    {
        printf("Exame\n");
        printf("Enter a recuperation note: ");
        scanf("%f", &np);

        if((media + np) / 2 >= 6)
        {
            printf("Aproved!\n");
        }
        else
        {
            printf("Reproved..\n");
        }
    }

    return 0;
}