#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, h;
    printf("Informe o cateto x: ");
    scanf("%f", &x);
    printf("Informe o cateto y: ");
    scanf("%f", &y);

    h = sqrt((x * x) + (y * y));

    printf("A hipotenusa é: %.2f\n", h);
    return 0;
}