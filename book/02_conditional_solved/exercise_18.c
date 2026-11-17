#include <stdio.h>
int main()
{
    // Receber
    int x, y, z;

    // Entrada
    printf("Informe um valor inteiro para cada lado de um triângulo:\n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);

    // Verifica se é um triângulo.
    if(x < y + z && y < x + z && z < x + y)
    {
        // Verifica qual tipo de triângulo é.
        if(x == y && x == z && z == y)
        {
            printf("Isso é uma triângulo equilátero(3 lados iguais).\n");
        }
        else if(x == y || x == z || z == y)
        {
            printf("Isso é uma triângulo isóceles (2 lados iguais).\n");
        }
        else
        {
            printf("Isso é um triângulo escaleno (3 lados diferente)\n");
        }
    }
    else
    {
        printf("Isso não pode ser considerado triângulo.\n");
    }

    return 0;
}