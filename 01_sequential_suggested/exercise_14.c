#include <stdio.h>
int main()
{
    int anoNascimento, anoAtual, idade, meses, dias, semanas;
    printf("informe seu ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Informe ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    meses = idade * 12.0;
    dias = meses * 30.0;
    semanas = dias / 7;

    printf("Sua idade: %.2d\n", idade);
    printf("Quantos meses você tem: %.2d\n", meses);
    printf("Quantos dias você tem: %.2d\n", dias);
    printf("Quantas semanas você tem: %.2d\n", semanas);

    return 0;
}