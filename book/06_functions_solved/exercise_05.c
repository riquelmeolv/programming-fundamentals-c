#include <stdio.h>
float percentage(float old, float current);

int main()
{
    float old, current, result;
    printf("Informe valor antigo: ");
    scanf("%f", &old);
    printf("Informe valor atual: ");
    scanf("%f", &current);

    result = percentage(old, current);
    printf("O acréscimo foi de: %.1f%\n", result);

    return 0;
}

float percentage(float old, float current)
{
    float result;
    result = ((current - old) / old) * 100;
    return result;
}