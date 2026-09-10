#include <stdio.h>
int main()
{
    float salario, aumento, newsalario;
    printf("Informe o salário: ");
    scanf("%f", &salario);

    if(salario <= 300)
    {
        aumento = salario * (15.0 / 100.0);
        newsalario = salario + aumento;
        printf("O aumento foi de: %.2f\n", aumento);
        printf("O novo salário é: %.2f\n", newsalario);
    }
    else if(salario < 600)
    {
        aumento = salario * (10.0 / 100.0);
        newsalario = salario + aumento;
        printf("O aumento foi de: %.2f\n", aumento);
        printf("O novo salário é: %.2f\n", newsalario);
    }
    else if(salario <= 900)
    {
        aumento = salario * (5.0 / 100.0);
        newsalario = salario + aumento;
        printf("O aumento foi de: %.2f\n", aumento);
        printf("O novo salário é: %.2f\n", newsalario);
    }
    else
    {
        aumento = 0;
        newsalario = salario;
        printf("O aumento foi de: %.2f\n", aumento);
        printf("O novo salário é: %.2f\n", newsalario);
    }
    return 0;
}