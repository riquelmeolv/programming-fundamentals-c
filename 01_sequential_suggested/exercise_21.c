#include <stdio.h>

int main()
{
    int nh, nhe;
    float min, vht, vhe, bruto, the, salario;
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &nh);
    printf("Infrome o salário mínimo: ");
    scanf("%f", &min);
    printf("Infrome a quantidade de horas extras trabalhadas: ");
    scanf("%d", &nhe);

    vht = (1.0 / 8.0) * min;
    vhe = (1.0 / 4.0) * min;
    bruto = nh * vht;
    the = vhe * nhe;
    salario = bruto + the;
    
    printf("O salário a receber é: R$%.2f\n", salario);
    return 0;
}