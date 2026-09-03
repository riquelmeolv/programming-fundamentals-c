#include<stdio.h>
#include<stdlib.h>

int main()
{
    int op; 
    float salario, imposto, new;
    printf("Menu de opções:\n1. Imposto\n2. Novo salário\n3. Classificação\n");
    printf("Opção:");
    scanf("%d",&op);
    
    if(op == 1)
    {
     printf("Informe seu salario: ");
     scanf("%f", &salario);
     if (salario < 500)
     {
     imposto = salario * (5.0 / 100.0);
     printf("O imposto é: %.2f\n", imposto);
     }
     else if(salario >= 500 && salario <=850)
     {
     imposto = salario * (10.0 / 100.0);
     printf("O imposto é: %.2f\n", imposto);
     }
     else
     {
     imposto = salario * (15.0 / 100.0);
     printf("O imposto é: %.2f\n", imposto);
     }
    }
    else if(op == 2)
    {
     printf("Informe seu salario: ");
     scanf("%f", &salario);
     if(salario > 1500)
     {
     new = salario + 25;
     printf("O novo salário é: %.2f\n", new);
     }
     else if(salario >= 750 && salario <= 1500)
     {
     new = salario + 50;
     printf("O novo salário: %.2f\n", new);
     }
     else if(salario >= 450 && salario < 750)
     {
     new = salario + 75;
     printf("O novo salário é: %.2f\n", new);
     }
     else 
     {
     new = salario + 100;
     printf("O novo salário é: %.2f\n", new);
     }
    }
    else if(op == 3)
    {
     printf("Informe seu salario: ");
     scanf("%f", &salario);
     if(salario <= 700)
     {
     printf("Mal remunerado\n");
     }
     else
     {
     printf("Bem remunerado\n");
     }
    }
    else
    {
    printf("Opção Inválida\n"); 
    }
    return 0;
}