#include <stdio.h>
#define totalTriangulo 180
int main()
{
    float a1, a2, a3;
    printf("Informe o primeiro ângulo do triângulo: ");
    scanf("%f", &a1);
    printf("Informe o segundo ângulo do triângulo: ");
    scanf("%f", &a2);

    a3 = totalTriangulo - a1 - a2;
    
    printf("O terceiro ângulo do triângulo é: %.2f\n", a3);
    
    return 0;
}