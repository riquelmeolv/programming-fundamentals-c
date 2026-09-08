#include <stdio.h>

int main()
{
    int an, at, idade, i2050;
    printf("Informe o ano de nascimento: ");
    scanf("%d", &an);
    printf("Informe o ano atual: ");
    scanf("%d", &at);

    idade = at - an;
    i2050 = 2050 - an;
    printf("Sua idade atual é: %d\n", idade);
    printf("Sua idade em 2050 será: %d\n", i2050);
    
    return 0;
}