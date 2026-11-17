#include <stdio.h>
#include <math.h>

int main()
{
    float area, pi, raio;
    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);

    pi = 3.1415;
    area = pi * pow(raio, 2);

    printf("A área é: %.2f\n", area);
    return 0;
}