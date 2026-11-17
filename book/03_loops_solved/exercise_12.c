#include <stdio.h>
#include <ctype.h>

int main()
{
    float sal_min, qtd_peca, salario, folha, total_pecas, 
    soma_homens, soma_mulher, med_homens, med_mulher, maior_sal;
    int num_ope, num_peca, cont_homens, cont_mulher, maior_cod;
    char sexo;

    int min = 30;
    sal_min = 1000;
    folha = 0;
    total_pecas = 0;
    soma_homens = 0;
    soma_mulher = 0;
    cont_homens = 0;
    cont_mulher = 0;
    maior_sal = 0;
    for(int i = 1; i <= 15; i++)
    {
        printf("Número do operário: ");
        scanf("%d", &num_ope);
        printf("Número de peças: ");
        scanf("%d", &num_peca);
        printf("Qual sexo do operário(M ou F): ");
        scanf(" %c", &sexo);

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

        printf("O operário de número %d tem salário de R$%.1f\n", i, salario);

        if(toupper(sexo) == 'M')
        {
            soma_homens += num_peca;
            cont_homens++;
        }
        else
        {
            soma_mulher += num_peca;
            cont_mulher++;
        }

        if(salario > maior_sal)
        {
            maior_sal = salario;
            maior_cod = i;
        }

        total_pecas += num_peca;
        folha += salario;
    }
    
    printf("A folha total de pagamentos é de R$%.2f\n", folha);
    printf("O número de peças totais foi: %.2f\n", total_pecas);
    printf("O operador número %d teve o maior salário de R$: %.2f\n", maior_cod, maior_sal);

    if(cont_homens > 0)
    {
        med_homens = soma_homens / cont_homens;
    }
    else
    {
        med_homens = 0;
    }
    
    if(cont_mulher > 0)
    {
        med_mulher = soma_mulher / cont_mulher;
    }
    else
    {
        med_mulher = 0;
    }

    printf("A média de peças dos homens foi: %.2f Peças.\n", med_homens);
    printf("A média de peças das mulheres foi: %.2f Peças.\n", med_mulher);

    return 0;
}