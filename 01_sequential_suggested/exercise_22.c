#include <stdio.h>

int main()
{
    int n;
    float diagonais;
    printf("Informe a quantidade de lados de um polígono convexo: ");
    scanf("%d", &n);

    diagonais = n * (n - 3) / 2;

    printf("O número de diagonais desse polígono é: %.0f\n", diagonais);
    return 0;
}