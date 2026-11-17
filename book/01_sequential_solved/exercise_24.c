#include <stdio.h>

int main()
{
    float real, inteiro, decimal, minutosDecimais, total;
    printf("Informe a hora com um número real(14:30 - 14.30): ");
    scanf("%f", &real);
    if(real > 24.0)
    {
        printf("Horário inválido\n");
        return 1;
    }

    inteiro = (int)real * 60;
    decimal = real - (int)real;
    minutosDecimais = decimal * 100;
    if(minutosDecimais > 59.0)
    {
        printf("Minutagem inválida\n");
        return 1;
    }
    
    total = inteiro + minutosDecimais;

    printf("A hora em minutos é: %.2f\n", total);

    return 0;
}