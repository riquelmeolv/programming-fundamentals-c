#include <stdio.h>
#include <ctype.h>
/*
declarar: período(3 meses), numCriancas, mor, TF, MRTF, MM, TM, MOM;
For(sexo, tempo de vida)

*/
int main()
{
    int meses, numCriancas, tempoVida, pocentFeminino, porcentMasculino, totalFemini;
   
    char sexo;

    printf("Informe o número de criânças nascidas no período\n");
    scanf("%d", &numCriancas);

    for(int i = 1; i <= numCriancas; i++)
    {
        printf("Informe o sexo da criânça %d (M ou F): ", i);
        scanf("%c", &sexo);
        printf("Informe o tempo de vida dessa criânça no período: ");
        scanf("%d", &tempoVida);

        if(sexo == 'M')
        {

        }

    }
    return 0;
}