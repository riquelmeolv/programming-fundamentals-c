#include <stdio.h>
#define p1 2
#define p2 3
int main()
{
    float n1, n2, mediapon;
    printf("Informe a nota 1: ");
    scanf("%f", &n1);
    printf("Informe a nota 2: ");
    scanf("%f", &n2);

    mediapon = (n1 * p1 + n2 * p2) / (p1 + p2);

    printf("A média ponderada é: %.2f\n", mediapon);
    return 0;
}