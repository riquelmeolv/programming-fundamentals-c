#include <stdio.h>

int main()
{
    float area, base, altura;
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2.0;
    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}