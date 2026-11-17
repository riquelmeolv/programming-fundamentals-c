#include <stdio.h>
#include <math.h>
int main()
{

    float angulo, radianos, escada, alturaParede, pi;
    printf("Informe o grau formado pela escada: ");
    scanf("%f", &angulo);
    printf("Informe a altura da parede: ");
    scanf("%f", &alturaParede);

    pi = 3.14;
    radianos = angulo * pi / 180;
    escada = alturaParede / sin(radianos);

    printf("A altura da escada é: %.2f\n", escada);
    
    return 0;
}