#include <stdio.h>
#define ANDARES 5
#define QUARTOS 8

void exibirOcupacao(int hotel[][QUARTOS]);
void contarOcupadosAndar(int hotel[][QUARTOS]);
void inicializarMatriz(int hotel[][QUARTOS]);
float calcularTaxaOcupacao(int hotel[][QUARTOS]);
void consultarQuarto(int hotel[][QUARTOS]);

int main()
{
    int hotel[ANDARES][QUARTOS];
    inicializarMatriz(hotel);

    exibirOcupacao(hotel);

    contarOcupadosAndar(hotel);

    float percentual;
    percentual = calcularTaxaOcupacao(hotel);
    printf("Taxa geral: %.2f%\n", percentual);

    consultarQuarto(hotel);

    return 0;
}

void inicializarMatriz(int hotel[][QUARTOS])
{
    for(int i = 0; i < ANDARES; i++)
    {
        for(int j = 0; j < QUARTOS; j++)
        {
            hotel[i][j] = 0;
        }
    }    
}

void exibirOcupacao(int hotel[][QUARTOS])
{
    for(int i = 0; i < ANDARES; i++)
    {
        printf("Andar %d | ", i + 1);
        for(int j = 0; j < QUARTOS; j++)
        {
            printf("%d | ", hotel[i][j]);
        }
        printf("\n");
    }
}

void contarOcupadosAndar(int hotel[][QUARTOS])
{
    int totalOcupados = 0;
    int ocupados = 0, maior = 0, andarMaior;
    for(int i = 0; i < ANDARES; i++)
    {
        ocupados = 0;
        for(int j = 0; j < QUARTOS; j++)
        {
            ocupados += hotel[i][j];
        }
        totalOcupados += ocupados;
        if(i == 0)
        {
            maior = ocupados;
            andarMaior = i;
        }
        else
        {
            if(ocupados > maior)
            {
                maior = ocupados;
                andarMaior = i;
            }
        }

        printf("Andar %d | Livres %d | Ocupados %d |\n", i + 1, (QUARTOS - ocupados), ocupados);
    }

    printf("Total de ocupados: %d\n", totalOcupados);
    printf("Total livres: %d\n", (ANDARES * QUARTOS - totalOcupados));
    printf("Número do andar mais ocupado: %d\n", andarMaior + 1);
}

float calcularTaxaOcupacao(int hotel[][QUARTOS])
{
    float sum = 0;
    float percentual;
    for(int i = 0; i < ANDARES; i++)
    {
        for(int j = 0; j < QUARTOS; j++)
        {
            sum += hotel[i][j];
        }
    }

    percentual = (sum / (ANDARES * QUARTOS)) * 100;
    return percentual;
}

void consultarQuarto(int hotel[][QUARTOS])
{
    int andar, quarto;
    printf("Informe o andar: ");
    scanf("%d", &andar);
    printf("Informe o quarto: ");
    scanf("%d", &quarto);
    if(andar < 1 || andar > ANDARES)
    {
        printf("Andar inválido.");
        return;
    }
    if(quarto < 1 || quarto > QUARTOS)
    {
        printf("Quarto inválido.");
        return;
    }

    if(hotel[andar - 1][quarto - 1] == 1)
    {
        printf("Quarto ocupado...\n");
    }
    else
    {
        printf("Quarto livre\n");
    }

}