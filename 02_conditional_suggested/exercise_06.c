#include <stdio.h>
#include <math.h>
int main()
{
    int op;
    float n1, n2, r1, r2;
    printf("Envie uma opção de 1 a 3: ");
    scanf("%d", &op);
    if(op < 1 || op > 3)
    {
        printf("Inválido\n");
        return 1;
    }
    printf("Envie dois números: ");
    scanf("%f %f", &n1, &n2);

    if(op == 1){
        r1 = pow(n1, n2);
        printf("Resultado: %.2f\n", r1);
    }
    else if(op == 2){
        r1 = sqrt(n1);
        r2 = sqrt(n2);
        printf("Resultado 1: %.2f\nResultado 2: %.2f\n", r1, r2);
    }
    else{
        r1 = pow(n1, 1.0 / 3.0);
        r2 = pow(n2, 1.0 / 3.0);
        printf("Resultado 1: %.2f\nResultado 2: %.2f\n", r1, r2);
    }
    return 0;
}