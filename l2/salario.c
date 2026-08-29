#include <stdio.h>
int main()
{
    int codigo;
    float salario, novosalario;
    printf("Envie o código do seu cargo (1 a 5): ");
    scanf("%d", &codigo);
    printf("Digite também o seu salário atual: ");
    scanf("%f", &salario);

    if(codigo == 1)
    {
        printf("Seu cargo é: Escriturário.\n");
        printf("O percentual de aumento no seu salário é de 50%.\n");
        novosalario = salario * (1.0 + 50.0 / 100.0);
        printf("Seu novo salário será de: %.2f", novosalario);
    }
    else if(codigo = 2)
    {
        printf("Seu cargo é: Secretário.\n");
        printf("O percentual de aumento no seu salário é de 35%.\n");
        novosalario = salario * (1.0 + 35.0 / 100.0);
        printf("Seu novo salário será de: %.2f", novosalario);
    }
    else if(codigo == 3)
    {
        printf("Seu cargo é: Caixa.\n");
        printf("O percentual de aumento no seu salário é de 20%.\n");
        novosalario = salario * (1.0 + 20.0 / 100.0);
        printf("Seu novo salário será de: %.2f", novosalario);
    }
    else if(codigo == 4)
    {
        printf("Seu cargo é: Gerente.\n");
        printf("O percentual de aumento no seu salário é de 10%.\n");
        novosalario = salario * (1.0 + 10.0 / 100.0);
        printf("Seu novo salário será de: %.2f", novosalario);
    }
    else if(codigo == 5)
    {
        printf("Seu cargo é: Diretor\n");
        printf("O percentual de aumento no seu salário é de 0%\n");
        novosalario = salario * (1.0 + 35.0 / 100.0);
        printf("Seu salário não terá aumento.\n");
    }
    else
    {
        printf("Código inválido.\n");
    }
    return 0;
}