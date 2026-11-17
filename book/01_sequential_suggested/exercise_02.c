#include <stdio.h>
int main()
{
    float n1, n2, n3, mult;
    printf("Número 1: ");
    scanf("%f", &n1);
    printf("Número 2: ");
    scanf("%f", &n2);
    printf("Número 3: ");
    scanf("%f", &n3);

    mult = n1 * n2 * n3;
    printf("A multiplicação deles é: %.2f\n", mult);
    
    return 0;
}