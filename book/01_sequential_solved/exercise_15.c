#include <stdio.h>

int main()
{
    float pf, pl, pi, vl, vi, pt;

    printf("Informe o preço de fábrica: ");
    scanf("%f", &pf);
    printf("Informe o percentual de lucro: ");
    scanf("%f", &pl);
    printf("Informe o percentual de imposto: ");
    scanf("%f", &pi);

    vl = pf * (pl / 100.0);
    vi = pf * (pi / 100.0);
    pt = pf + vl + vi;

    printf("O valor do lucro é: R$%.2f\n", vl);
    printf("O valor do imposto é: R$%.2f\n", vi);
    printf("O preço final é: R$%.2f\n", pt);

    return 0;
}