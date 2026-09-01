#include <stdio.h>

int main()
{
    float salario, percentual, newsalario;

    printf("Informe o salario e depois o percentual de aumento (em porcentagem):\n");
    scanf("%f %f", &salario, &percentual);

    newsalario = salario * (percentual / 100 + 1);
    printf("Seu novo salario:%.2f", newsalario);

    return 0;
}