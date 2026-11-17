#include <stdio.h>
int main()
{
    float grau, fahrenheit;
    printf("Informe a temperatura em graus(C°): ");
    scanf("%f", &grau);

    fahrenheit = (180.0 / 100.0 * grau) + 32;

    printf("A temperatura em Fahrenheit: %.2fF\n", fahrenheit);
    return 0;
}