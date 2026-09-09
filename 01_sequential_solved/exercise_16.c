#include <stdio.h>

int main()
{
    float salario_min, valor_hora, salario_bru, imposto, salario_final;
    int horas_trab;

    printf("Informe o salário mínimo: ");
    scanf("%f", &salario_min);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &horas_trab);

    valor_hora = salario_min / 2.0;
    salario_bru = horas_trab * valor_hora;
    imposto = salario_bru * (3.0 / 100.0);
    salario_final = salario_bru - imposto;

    printf("O salário final é: R$%.2f\n", salario_final);
    return 0;
}