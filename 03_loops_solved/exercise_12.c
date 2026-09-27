#include <stdio.h>

/*
CLASSE_1 <=30, sal_min
CLASSE_2 <= 50, sal_min + (peça * 0.03 * sal_min > 30)
CLASSE_3 > 50, sal_min + (peça 0.05 * sal_min > 30)
For(número_operário, número_peça, sexo_operario)
mostrar: numero_operario e salario
        total da folha de pagamento
        número de peças totais
        media de peças dos homens
        media de peças das mulheres
        o número do operario de maior salario
    15 operarios.
*/
int main()
{
    float class1, class2, class3, sal_min, qtd_peca, salario,
         folha, total_pecas, soma_homens, soma_mulher, med_homens,
         med_mulher, maior_sal, maior_cod;
    int num_ope, num_peca, cont_homens, cont_mulher;
    char sexo;
    int min = 30;
    
    sal_min = 1000;
    folha = 0;
    total_pecas = 0;
    soma_homens = 0;
    soma_mulher = 0;
    cont_homens = 0;
    for(int i = 0; i < 15; i++)
    {
        printf("Número do operário: ");
        scanf("%d", &num_ope);
        printf("Número de peças: ");
        scanf("%d", &num_peca);
        printf("Qual sexo do operário(M ou F): ");
        scanf("%c", &sexo);

        if(num_peca <= 30)
        {
            salario = sal_min;

        }
        else if(num_peca <= 50)
        {
            qtd_peca = num_peca - min;
            salario = sal_min + (sal_min * 0.03 * qtd_peca);
        }
        else
        {
            qtd_peca = num_peca - min;
            salario = sal_min + (sal_min * 0.05 * qtd_peca);
        }

        printf("O operário de número %d tem salário de R$%.1f\n", i + 1, salario);

        if(sexo == 'M')
        {
            soma_homens += num_peca;
            cont_homens++;
        }
        else
        {
            soma_mulher += num_peca;
        }

        if(i == 0)
        {
            maior_sal = salario;
            maior_cod = i + 1;
        }
        else if(salario > maior_sal)
        {
            maior_sal = salario;
            maior_cod = i + 1;
        }
        else
        {
            printf("Não teve um salário maior ou dados suficientes.\n");
        }

        total_pecas += num_peca;
        folha += salario;
    }

    printf("A folha total de pagamentos é de R$%.2f\n", folha);
    printf("O número de peças totais foi: %.2f", total_pecas);
    printf("O operador número %f teve o maior salário de R$%.2f\n", maior_cod, maior_sal);

    med_homens = soma_homens / cont_homens;
    cont_mulher = 15 - cont_homens;
    med_mulher = soma_mulher / cont_mulher;

    printf("A média de peças dos homens foi: %.2f Peças.\n", med_homens);
    printf("A média de peças das mulheres foi: %.2f Peças.\n", med_mulher);

    return 0;
}