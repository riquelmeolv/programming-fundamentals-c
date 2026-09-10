#include <stdio.h>
int main()
{
    float salario, grat, imposto, salario_final;
    printf("Informe o salário bruto: ");
    scanf("%f", &salario);
    
    if(salario <= 350)
    {
        grat = 100.0;
    }
    else if(salario < 600)
    {
        grat = 75.0;
    }
    else if(salario <= 900)
    {
        grat = 50.0;
    }
    else
    {
        grat = 35.0;
    }
    
    imposto = salario * 0.07;
    salario_final = salario + grat - imposto;

    printf("O salário final: %.2f\n", salario_final);
    return 0;
}