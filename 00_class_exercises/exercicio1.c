#include <stdio.h>

/* 
2005 0 1000
2006 1.5 1015
2007 3.0
2008 6.0
2009 12.0
*/
int main()
{
    float salario_inicial, salario_final, percentual;
    int ano_atual, ano_inicial_aumentos, ano_inicial_trabalho;

    printf("Digite o ano em que começou a trabalhar: ");
    scanf("%d", &ano_inicial_trabalho);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    salario_inicial = 1000;
    percentual = 1.5 / 100;
    ano_inicial_aumentos = ano_inicial_trabalho + 1;
    
    if(ano_atual == ano_inicial_aumentos)
    {
        salario_final = salario_inicial * (1 + percentual);
        printf("O salário final é: %.2f\n", salario_final);
    }
    else
    {
        for(ano_inicial_aumentos; ano_atual > ano_inicial_aumentos; ano_inicial_aumentos++)
        {
            percentual *= 2;
            salario_final = salario_inicial * (1 + percentual); 
        }
        printf("O salário final é: %.2f\n",salario_final);
    }
    return 0;
}