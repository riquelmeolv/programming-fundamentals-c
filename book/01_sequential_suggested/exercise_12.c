#include <stdio.h>
int main()
{
    float salMin, salFun, qtdSal;
    printf("Informe o salário mínimo: ");
    scanf("%f", &salMin);
    printf("Informe seu salário: ");
    scanf("%f", &salFun);

    qtdSal = salFun / salMin;

    printf("O funcionário recebe: %.2f salários.\n", qtdSal);
    return 0;
}