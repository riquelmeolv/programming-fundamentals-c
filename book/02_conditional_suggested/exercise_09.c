#include <stdio.h>
int main()
{
    float saldo_med, valor_cre;
    printf("Informe o saldo médio: ");
    scanf("%f", &saldo_med);

    if(saldo_med <= 200)
    {
        valor_cre = saldo_med * (10.0 / 100.0);
        printf("O saldo médio: %.2f\n", saldo_med);
        printf("O valor do crédito é: %.2f\n", valor_cre);
    }
    else if(saldo_med <= 300)
    {
        valor_cre = saldo_med * (20.0 / 100.0);
        printf("O saldo médio: %.2f\n", saldo_med);
        printf("O valor do crédito é: %.2f\n", valor_cre); 
    }
    else if(saldo_med <= 400)
    {
        valor_cre = saldo_med * (25.0 / 100.0);
        printf("O saldo médio: %.2f\n", saldo_med);
        printf("O valor do crédito é: %.2f\n", valor_cre);
    }
    else
    {
        valor_cre = saldo_med * (30.0 / 100.0);
        printf("O saldo médio: %.2f\n", saldo_med);
        printf("O valor do crédito é: %.2f\n", valor_cre);
    }
    return 0;
}