#include <stdio.h>

int main()
{
    float dinheiro, dolar, alemao, libra, d, a, l;
    printf("Informe a quantidade em dinheiro: ");
    scanf("%f", &dinheiro);

    dolar = 1.8;
    alemao = 2.0;
    libra = 3.57;
    d = dinheiro / dolar;
    a = dinheiro / alemao;
    l = dinheiro / libra;

    printf("A cotação para dolár: %.2f\n", d);
    printf("A cotação para marco alemão: %.2f\n", a);
    printf("A cotação para libra esterlina: %.2f\n", l);
    
    return 0;
}