#include <stdio.h>

int main()
{
    int idade, total50 = 0, total40 = 0, totalGeral = 0;
    float peso, altura, somaAltura = 0, qtd, media, porcentagem;

    for(int i = 0; i < 5; i++)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);
        printf("Peso: ");
        scanf("%f", &peso);

        if(idade > 50)
        {
            total50++;
        }
        if(idade >= 10 && idade <= 20)
        {
            somaAltura += altura;
            qtd++;
        }
        if(peso < 40)
        {
            total40++;
        }

        totalGeral++;
    }

    media = somaAltura / qtd;
    porcentagem = (total40 * 100) / totalGeral;

    printf("A quantidade de pessoas maiores que 50 anos: %d\n", total50);
    printf("A média de altura das pessoas entre 10 e 20 anos: %.2f\n", media);
    printf("A porcentagem de pessoas com menos de 40kg: %.2f\n", porcentagem);
}