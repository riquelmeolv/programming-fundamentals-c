#include <stdio.h>

int main()
{
    char cod;
    float totalVista = 0 , totalPrazo = 0, totalCompras = 0, totalPrestacao = 0, valorCompra;

    for(int i = 0; i < 15; i++)
    {
        printf("Compra à vista ou prazo(V ou P)? ");
        scanf(" %c", &cod);
        printf("Informe o valor da compra: ");
        scanf("%d", &valorCompra);

        if(cod == 'V'){
            totalVista += valorCompra;
        }
        else if(cod == 'P'){
            totalPrazo += valorCompra;
            totalPrestacao += valorCompra;
        }
        else
        {
            printf("Código inválido.\n");
        }
        
    }
    totalCompras = totalVista + totalPrazo;
    totalPrestacao = totalPrazo / 3;
    printf("O total em compras à vista: R$%.1f\n", totalVista);
    printf("O total em compras à prazo: R$%.1f\n", totalPrazo);
    printf("O total em compras: R$%.1f\n", totalCompras);
    printf("O total das primeiras prestações: R$%.1f\n", totalPrestacao);
    return 0;
}