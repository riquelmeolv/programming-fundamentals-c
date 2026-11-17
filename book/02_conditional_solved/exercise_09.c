#include <stdio.h>
int main()
{

    int dia, ano, hora, minuto;
    char mes[20];
    printf("Qual dia do mês? ");
    scanf("%d", &dia);
    printf("Qual mês do ano? ");
    scanf("%s", &mes);
    printf("Qual ano estamos? ");
    scanf("%d", &ano);
    printf("Que hora é? ");
    scanf("%d", &hora);
    printf("Quantos minutos já se passaram? ");
    scanf("%d", &minuto);

    printf("Hoje é dia %d de %s de %d\n", dia, mes, ano);
    if(hora < 12)
    {
        printf("Horas: AM %d:%d\n", hora, minuto);
    }
    else
    {
        printf("Horas: PM %d:%d\n", hora, minuto);
    }

    return 0;
}