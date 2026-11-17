#include <stdio.h>
#define students 3
#define notes 2

int main()
{
    float matrix[students][notes];
    char alunos[students][50];
    int sumall = 0, sumind = 0, mediaind, mediaall;

    for(int i = 0; i < students; i++)
    {
        printf("Name student %d: ", i + 1);
        fflush(stdin);
        scanf("%s", alunos[i]);   
    }

    for(int i = 0; i < students; i++)
    {
        for(int j = 0; j < notes; j++)
        {
            printf("Note %d | Column %d: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }

    for(int i = 0; i < students; i++)
    {
        sumind = 0;
        for(int j = 0; j < notes; j++)
        {
            sumind += matrix[i][j];
            sumall += matrix[i][j];
        }

        mediaind = sumind / notes;
        printf("========\n");
        printf("Aluno: %s\n", alunos[i]);
        printf("Média: %d\n", mediaind);
        if(mediaind >= 7)
        {
            printf("Aprovado!\n");
        }
        else if(mediaind < 3)
        {
            printf("Reprovado!\n");
        }
        else{
            printf("Exame\n");
        }
    }

}