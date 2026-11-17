#include <stdio.h>

// Seis alunos, duas notas
// For(média, avaliação)
// Total de Aprovações, Reprovações, Recuperação, Média.
int main()
{
    float n1, n2, med, aprov, reprov, recup, soma_geral, med_geral;
    aprov = 0;
    reprov = 0;
    recup = 0;
    soma_geral = 0;
    for(int i = 0; i < 6; i++)
    {
        n1 = 0;
        n2 = 0;
        printf("Informe a primeira nota: ");
        scanf("%f", &n1);
        printf("Informe a segunda nota: ");
        scanf("%f", &n2);

        med = (n1 + n2) / 2.0;
        printf("Sua média é: %.2f\n", med);
        if(med >= 7)
        {
            printf("Aprovado\n");
            aprov++;
        }
        else if(med <= 3)
        {
            printf("Reprovado\n");
            reprov++;
        }
        else
        {
            printf("Recuperação\n");
            recup++;
        }
        soma_geral += med; 
    }

    med_geral = soma_geral / 6;
    printf("A média geral da turma: %.2f\n", med_geral);

    return 0;
}