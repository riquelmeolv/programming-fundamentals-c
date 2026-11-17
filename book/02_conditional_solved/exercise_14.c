#include<stdio.h>
#include<stdlib.h>

int main()
{
    float salario, new, bonificacao;
    printf("Informe o salário: ");
    scanf("%f", &salario);
    
    if(salario <= 600)
    {
     if(salario <= 500)
     {
     bonificacao = salario * (5.0 / 100.0);
     new = salario + 150 + bonificacao;
     printf("Salario novo: %.2f", new);
     }
    }
    else
    {
     if(salario > 500 && salario <= 1200)
     {
     bonificacao = salario * (12.0 / 100.0);
     new = salario + bonificacao + 100;
     printf("Salario novo: %.2f", new);
     }
     else
     {
     bonificacao = 0;
     new = salario + 100;
     printf("Salario novo: %.2f", new);
     }
    }
    return 0;
}