#include <stdio.h>
int main()
{
    float salario, newsalario, aumento;
    printf("informe seu salário: ");
    scanf("%f", &salario);

    if(salario < 500)
    {
        aumento = salario * (30.0 / 100.0);
        newsalario = salario + aumento;
        printf("O seu novo salário é: %.2f\n", newsalario);
    }
    else{
        printf("Você não tem direito ao aumento.");
    }
    return 0;
}