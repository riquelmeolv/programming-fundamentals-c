#include <stdio.h>

int main()
{
    float salario, newsalario, aumento;

    printf("Envie seu salário: ");
    scanf("%f", &salario);

    aumento = salario * (25.0 / 100.0);
    newsalario = salario + aumento;

    printf("Seu novo salário: R$%.2f\n", newsalario);
    return 0;
}