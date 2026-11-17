#include <stdio.h>
int main()
{
    float diagonalMaior, diagonalMenor, area;
    printf("Informe o tamanho da diagonal maior: ");
    scanf("%f", &diagonalMaior);
    printf("Informe o tamanho da diagonal menor: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("A área do losango é: %.2f\n", area);

    return 0;
}