#include <stdio.h>

// 5 time, 11 jogadores
// For(Idade, peso, altura)
// Jogadores(idade menor q 18 de todos, {media de idade do time}, media 
// de altura de todos os jogadores, porcetagem de jogadores 
// com mais de 80Kg entre todos os jogadores do campeonato)
int main()
{
    float peso, altura, soma_idade_time, med_time, soma_med_time, 
        med_alt_geral, soma_alt_geral, porcentagem80kg;
    int idade, cont_idade, cont_peso80;
    
    cont_idade = 0;
    cont_peso80 = 0;
    for(int i = 1; i <= 5; i++)
    {
        soma_idade_time = 0;
        soma_alt_geral = 0;
        med_time = 0;
        for(int j = 1; j <= 11; j++)
        {
            printf("Infrome a idade do jogador %d: ",j);
            scanf("%d", &idade);
            printf("Informe o peso do jogador %d: ", j);
            scanf("%f", &peso);
            printf("Informe a altura do jogador %d: ", j);
            scanf("%f", &altura);

            if(idade < 18)
            {
                cont_idade++;
            }
            
            if(peso > 80)
            {
                cont_peso80++;
            }
            soma_idade_time += idade;
            soma_alt_geral += altura;
        }
        
        med_time = soma_idade_time / 11;
        printf("A média de idade do time %d é %.2f\n", i, med_time);
    }

    med_alt_geral = soma_alt_geral / 55;
    porcentagem80kg = (cont_peso80 / 55) * 100;
    printf("A quantidade de pessoas menores que 18 anos é: %d\n", cont_idade);
    printf("A média de alturas de todos os jogadores é: %.2f\n", med_alt_geral);
    printf("A porcetagem de pessoas com 80kg entre todos os jogadores é: %.2f\n", porcentagem80kg);

    return 0;
}