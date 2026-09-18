#include <stdio.h>
int main()
{
    float inicial, aumento, final;
    int ano_inicial, ano_atual;
    
    inicial = 1000;
    aumento = 1.5 / 100;
    ano_atual = 2026;
    final = inicial + (aumento * inicial);

    for(int ano_inicial = 2007;ano_inicial < ano_atual; ano_inicial++)
    {
        aumento *= 2;
        final = final + aumento * final;
    }
    printf("O salário é %.2f\n", final);

    return 0;
}