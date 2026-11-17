#include <stdio.h>

/* 
Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

int main()
{

    float note1, note2, note3, note4, media;
    
    printf("Envie as 4 notas do aluno:\n");
    printf("Note 1: ");
    scanf("%f", &note1);
    printf("Note 2: ");
    scanf("%f", &note2);
    printf("Note 3: ");
    scanf("%f", &note3);
    printf("Note 4: ");
    scanf("%f", &note4);

    media = (note1 + note2 + note3 + note4) / 4.0;
    printf("Sua média foi: %.1f\n", media);

    if(media >= 7)
    {
        printf("Você está Aprovado!! :)\n");
    }
    else
    {
        printf("Você está Reprovado... :(\n");
    }

    return 0;
}