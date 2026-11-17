#include <stdio.h>
#include <math.h>

int main()
{
    float num, qua, cubo, r2, r3;
    printf("Informe um número: ");
    scanf("%f", &num);

    qua = pow(num, 2);
    cubo = pow(num, 3);
    r2 = sqrt(num);
    r3 = pow(num, 1.0 / 3.0);

    printf("O quadrado: %.2f\n", qua);
    printf("O cubo: %.2f\n", cubo);
    printf("Raiz Quadrada: %.2f\n", r2);
    printf("Raiz cúbica: %.2f\n", r3);

    return 0;
}