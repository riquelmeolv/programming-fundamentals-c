#include <stdio.h>
#include <math.h>

int main()
{
    float num, inteira, fracionaria, arredondamento;

    printf("Informe um número real: ");
    scanf("%f", &num);

    inteira = (int)num;
    fracionaria = num - (int)num;
    arredondamento = round(num);

    printf("A parte inteira: %.0f\n", inteira);
    printf("A parte fracionário: %.4f\n", fracionaria);
    printf("O arredondamento é: %.0f\n", arredondamento);
    
    return 0;
}