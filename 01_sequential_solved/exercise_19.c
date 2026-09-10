#include <stdio.h>
int main()
{
    float alt_degrau, altura, degraus;
    printf("Informe a altura do degrau em metros: ");
    scanf("%f", &alt_degrau);
    printf("Informe a altura que você deseja alcançar em metros: ");
    scanf("%f", &altura);

    degraus = altura / alt_degrau;

    printf("Você precisa subir %.2f degraus.\n", degraus);

    return 0;
}