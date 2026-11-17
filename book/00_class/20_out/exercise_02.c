#include <stdio.h>
#define row 2
#define column 2

int main()
{
    float notes[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Aluno %d | Nota %d: ", i + 1, j + 1);
            scanf("%f", &notes[i][j]);
        }
    }

    float sumstudent, mediastudent[row], sumclass = 0, mediaclass;
    for(int i = 0; i < row; i++)
    {
        sumstudent = 0;
        for(int j = 0; j < column; j++)
        {
            sumstudent += notes[i][j];
            sumclass += notes[i][j];
        }
        mediastudent[i] = sumstudent / 2.0;

        printf("A média do aluno %d | %.1f\n", i + 1, mediastudent[i]);
    }

    mediaclass = sumclass / 8;
    int cont_approved = 0;
    for(int i = 0; i < row; i++)
    {
        if(mediastudent[i] > mediaclass)
        {
            cont_approved++;
        }
    }

    printf("A quantidade de aluno acima da média: %d", cont_approved);
    return 0;
}