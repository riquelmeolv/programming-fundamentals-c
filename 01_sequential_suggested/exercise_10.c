#include <stdio.h>
int main()
{
    float lado, area;
    printf("Informe o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A área do quadrado é: %.2f\n", area);
    
    return 0;
}