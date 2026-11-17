#include <stdio.h>

int main()
{
    int pesoSaco, pesoGramas, qtdRacao, totalRacao, restante;
    printf("Informe o peso do saco (Kg): ");
    scanf("%d", &pesoSaco);
    printf("Informe a quantidade de ração para cada gato por dia (Gramas): ");
    scanf("%d", &qtdRacao);

    // Transformação de Kg para g
    pesoGramas = pesoSaco * 1000;
    // Quantidade total de racao em 5 dias para 2 gatos
    totalRacao = (qtdRacao * 2) * 5;
    // O que restou do saco em gramas
    restante = pesoGramas - totalRacao;

    printf("O que restou de ração foi: %dg\n", restante);

    return 0;
}