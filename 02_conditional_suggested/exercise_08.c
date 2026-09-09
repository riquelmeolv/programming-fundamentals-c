#include <stdio.h>

int main()
{
    float salario, newsalario, aumento;
    printf("Informe o salário: ");
    scanf("%f", &salario);

    if(salario <= 300)
    {
        aumento = salario * (35.0 / 100.0);
        newsalario = salario + aumento;
        printf("Seu salário reajustado: %.2f\n", newsalario);
    }
    else{
        aumento = salario * (15.0 / 100.0);
        newsalario = salario + aumento;
        printf("Seu salário reajustado: %.2f\n", newsalario);
    }

    return 0;
}