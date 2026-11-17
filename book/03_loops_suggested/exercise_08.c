#include <stdio.h>

int main()
{
    // Declaração
    int idade, contIdadePeso, contOlhoAzul, contRuiva;
    float altura, peso, somaIdade, med, contIdade;
    char olho, cabelo;
    
    somaIdade = 0;
    contRuiva = 0;
    contOlhoAzul = 0;
    contIdadePeso = 0;
    contIdade = 0;
    // Seis pessoas
    for(int i = 0; i < 6; i++)
    {
        printf("Qual sua idade? ");
        scanf("%d", &idade);
        printf("Qual sua altura? ");
        scanf("%f", &altura);
        printf("Qual seu peso? ");
        scanf("%f", &peso);
        printf("Qual a cor dos olhos, somente com a inicial maiúscula\n"
               "(A — azul; P — preto; V — verde; e C — castanho)? ");
        scanf(" %c", &olho);
        printf("Qual a cor dos cabelos, somente com a inical maiúscula\n"
            "(P — preto; C — castanho; L — louro; e R — ruivo)? ");
        scanf(" %c", &cabelo);

        if(idade > 50 && peso < 60)
        {
            contIdadePeso++;
        }

        if(altura < 1.5)
        {
            somaIdade += idade;
            contIdade++;
        }

        if(olho == 'A')
        {
            contOlhoAzul++;
        }

        if(cabelo == 'R' && olho != 'A')
        {
            contRuiva++;
        }
    }

    if(contIdade == 0)
    {
        med = 0;
    }
    else{
        med = somaIdade / contIdade;
    }

    printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n", contIdadePeso);
    printf("A média das idades das pessoas com altura inferior a 1,50 m: %.1f\n", med);
    printf("A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %d%\n", (contOlhoAzul * 100) / 6);
    printf("A quantidade de pessoas ruivas e que não possuem olhos azuis: %d\n", contRuiva);

    return 0;
}