#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
    float raio, circunferencia, area, volume;
    printf("Informe o raio da circunferência (metro): ");
    scanf("%f", &raio);

    circunferencia = 2 * pi * raio;
    area = pi * raio * raio;
    volume = 3.0 / 4.0 * (pi * raio * raio * raio);

    printf("A circunferência vale: %.2fm\n", circunferencia);
    printf("A área vale: %.2fm\n", area);
    printf("O volume vale: %.2fm\n", volume);

    return 0;
}