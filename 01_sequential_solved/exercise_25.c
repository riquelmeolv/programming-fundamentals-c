#include <stdio.h>

int main()
{
    float custoTotal, valorConvite, quantidadeConvite;

    printf("informe o custo total do espetáculo: ");
    scanf("%f", &custoTotal);
    printf("Informe o valor do convite: ");
    scanf("%f", &valorConvite);

    quantidadeConvite = custoTotal / valorConvite;

    printf("A quantidade de convites mínimas necessária é: %.1f\n", quantidadeConvite);
    return 0;
}