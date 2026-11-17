#include <stdio.h>
#include <math.h>
int main()
{
    float angulo, radianos, distancia, escada;
    printf("Informe o ângulo da escada: ");
    scanf("%f", &angulo);
    printf("Informe a distância da escada até a parede: ");
    scanf("%f", &distancia);

    radianos = angulo * 3.14 / 180.0;
    escada = distancia / cos(radianos);
    
    printf("A medidad da escada é: %.2f\n", escada);
    return 0;
}