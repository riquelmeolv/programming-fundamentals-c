#include <stdio.h>
int main()
{
    float fabrica, distribuidor, imposto, consumidor;
    printf("Envie o preço de fábrica: ");
    scanf("%f", &fabrica);

    if(fabrica <= 12000)
    {
        distribuidor = fabrica * (5.0 / 100.0);
        imposto = 0;
        consumidor = fabrica + distribuidor + imposto;
        printf("Preço final: %.2f\n", consumidor);
    }
    else if(fabrica <= 25000)
    {
        distribuidor = fabrica * (10.0 / 100.0);
        imposto = fabrica * (15.0 / 100.0);
        consumidor = fabrica + distribuidor + imposto;
        printf("Preço final: %.2f\n", consumidor);
    }
    else
    {
        distribuidor = fabrica * (15.0 / 100.0);
        imposto = fabrica * (20.0 / 100.0);
        consumidor = fabrica + distribuidor + imposto;
        printf("Preço final: %.2f\n", consumidor);
    }
    return 0;
}