#include <stdio.h>
#define VALOR_DEPENDENTE 32
#define ADICIONAL_HORA_EXTRA 1.5

int main()
{
    // Receber
    float salario_min, horas_trabalhadas, hora_extra;
    int numero_dependentes;
    // Declarar
    float valor_hora_trabalhada, valor_hora_extra, total_dependentes, salario_mes, salario_a_receber, total_hora_extra, imposto, salario_bruto, salario_liquido, gratificacao;

    // Entrada
    printf("Olá, informe o salário mínimo atual: ");
    scanf("%f", &salario_min);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Informe o número de dependentes: ");
    scanf("%d", &numero_dependentes);
    printf("Informe a quantidade de horas extras: ");
    scanf("%f", &hora_extra);

    // Cálculos
    printf("=======================\n");
    valor_hora_trabalhada = (1.0 / 5.0) * salario_min;
    printf("Valor da hora trabalhada: R$ %.2f\n", valor_hora_trabalhada);
    salario_mes = horas_trabalhadas * valor_hora_trabalhada;
    printf("Salário do mês: R$ %.2f\n", salario_mes);
    total_dependentes = numero_dependentes * VALOR_DEPENDENTE;
    printf("Total em dependentes: R$ %.2f\n", total_dependentes);
    valor_hora_extra = valor_hora_trabalhada * ADICIONAL_HORA_EXTRA;
    printf("Valor da hora extra: R$ %.2f\n", valor_hora_extra);
    total_hora_extra = valor_hora_extra * hora_extra;
    printf("Total da hora extra: R$ %.2f\n", total_hora_extra);
    salario_bruto = salario_mes + total_hora_extra + total_dependentes;
    printf("Valor do salário bruto: R$ %.2f\n", salario_bruto);
    
    // Calcular imposto
    if(salario_bruto < 200)
    {
        // Isento
        imposto = 0;
        salario_liquido = salario_bruto - imposto;
    }
    else if(salario_bruto >= 200 && salario_bruto <= 500)
    {
        imposto = salario_bruto * (10.0 / 100.0);
        salario_liquido = salario_bruto - imposto;
    }
    else
    {
        imposto = salario_bruto * (20.0 / 100.0);
        salario_liquido = salario_bruto - imposto;
    }

    // Gratificação
    if(salario_liquido <= 350)
        gratificacao = 100;
    else
        gratificacao = 50;

    // Salario total
    salario_a_receber = salario_liquido + gratificacao;
    printf("O seu salário a receber é: R$ %.2f\n", salario_a_receber);

    return 0;
}
