#include <stdio.h>
int main()
{
    float area, baseMaior, baseMenor, altura;
    printf("Informe a base maior: ");
    scanf("%f", &baseMaior);
    printf("Informe a base menor: ");
    scanf("%f", &baseMenor);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2.0;

    printf("A área desse trapézio é: %.2f\n", area);
    return 0;
}