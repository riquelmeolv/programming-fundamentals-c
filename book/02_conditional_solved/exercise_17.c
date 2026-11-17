#include <stdio.h>
#include <math.h>

int main()
{
    // Recber
    float a, b, c, delta, x1, x2, xv;

    // Entrada    
    printf("Vamos resolver uma função quadrática, ou seja, do 2° grau.\n");
    printf("Sua formação é ax^2 + bx + c = 0...\n");
    printf("Defina os coeficientes:\n");

    printf("a: ");
    scanf("%f", &a);
    if(a == 0)
    {
        printf("'a' deve ser diferente de 0...");
        return 1;
    }
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    // Cálculo das raízes.
    delta = b * b - 4 * a * c; 
    x1 = (- b + sqrt(delta) / (2 * a));
    x2 = (- b - sqrt(delta) / (2 * a));

    // Resultados
    if (delta > 0)
    {
        printf("Essa função possui 2 raízes diferentes!\n");
        printf("Raiz 1: %.2f\n", x1);
        printf("Raiz 2: %.2f\n", x2);
    }
    else if (delta == 0)
    {
        printf("Essa função possui 2 raizes iguais!\n");
        printf("Raiz 1: %.2f\n", x1);
        printf("Raiz 2: %.2f\n", x2);
    }
    else
    {
        printf("Essa função não possui raiz real...\n");
        return 2;
    }
    return 0;
}