#include <stdio.h>
#include <math.h>

int main()
{
    float escada, altura, distancia;
    printf("Informe a altura do quadro: ");
    scanf("%f", &altura);
    printf("Informe o tamanho da escada: ");
    scanf("%f", &escada);
    if(altura > escada)
    {
        printf("Escada pequena\n");
        return 1;
    }

    distancia = sqrt((escada * escada) - (altura * altura));

    printf("A distância da escada deve ser de: %.2f\n", distancia);

    return 0;
}