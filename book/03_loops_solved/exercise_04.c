#include <stdio.h>

int main()
{
    int cod, num_vei, num_vit;
    int maior_vit, menor_vit, maior_cod, menor_cod;
    int soma_vei, soma_aci, cont_aci;
    float media_vei, media_aci;

    soma_vei = 0;
    soma_aci = 0;
    cont_aci = 0;
    for(int i = 1; i <= 5; i++)
    {
        printf("Informe o código da cidade: ");
        scanf("%d", &cod);
        printf("Informe o número de veículos de passeio: ");
        scanf("%d", &num_vei);
        printf("Informe o número de acidentes de trânsito com vítimas: ");
        scanf("%d", &num_vit);

        if(i == 1)
        {
            /* 
            A primeira cidade assumirá tanto o maior índice 
            acidentes quanto o menor índice de acidentes com vítimas,
            logo o código é o mesmo.
            */
            maior_vit = num_vit;
            maior_cod = cod;
            menor_vit = num_vit;
            menor_cod = cod;
        }
        else 
        {
            /* 
            Para as demais cidades, devemos comparar
            o maior e o menor e atualizar o valor.
            */
            if(num_vit > maior_vit)
            {
                maior_vit = num_vit;
                maior_cod = cod;
            }
            if(menor_vit > num_vit)
            {
                menor_vit = num_vit;
                menor_cod = cod;
            }
        }
        // Soma a quantidade de veículos em cada iteração
        soma_vei += num_vei;
        
        if(num_vei < 2000)
        {
            soma_aci += num_vit; 
            cont_aci++;
        }
    }

    // Média de veículo 
    media_vei = soma_vei / 5;
    printf("A cidade com código %d teve o maior índice de acidentes de trânsito, com %d acidentes.\n", maior_cod, maior_vit);
    printf("A cidade com código %d teve o menor índice de acidentes de trânsito, com %d acidentes.\n", menor_cod, menor_vit);
    printf("A média de veículos nas 5 cidades foi: %.1f\n", media_vei);

    if(cont_aci == 0)
    {
        printf("Não houve cidades com menos de 2000 veículos.\n");
        media_aci = 0;
        printf("Logo, a média de acidentes em cidades nessa condição foi: %.2f\n", media_aci);
    }
    else
    {
        media_aci = soma_aci / cont_aci;
        printf("A média de acidentes em cidade com menos de 2000 veículos foi: %.2f\n", media_aci);
    }
    return 0;
}