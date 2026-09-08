#include <stdio.h>

int main()
{
    float salario, percentual, aumento, newsalario;

    printf("Informe o salario e depois o percentual de aumento (em porcentagem):\n");
    scanf("%f %f", &salario, &percentual);

    aumento = salario * (percentual / 100.0);
    newsalario = salario * (percentual / 100 + 1);
    
    printf("Seu valor de aumento é %.2f\n", aumento);
    printf("Seu novo salario:%.2f\n", newsalario);

    return 0;
}