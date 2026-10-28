#include <stdio.h>

void menu(void);
float MAritimetica(float *notes);
float MPonderada(float *notes);

int main()
{
    float notes[3], media;
    for(int i = 0; i < 3; i++)
    {
        printf("Number %d: ", i);
        scanf("%f", &notes[i]);
    }

    menu();
    char answer;
    printf("Answer(A ou P): ");
    scanf(" %c", &answer);

    if(answer == 'A')
    {
        media = MAritimetica(notes);
    }
    else
    {
        media = MPonderada(notes);
    }

    printf("The media is: %.2f\n", media);

    return 0;
}

void menu(void)
{
    printf("================\n");
    printf("A - Calcular Média Aritimética\n");
    printf("B - Calcular Média Ponderada\n");
    printf("================\n");
}

float MAritimetica(float *notes)
{
    float sum = 0, media;
    for(int i = 0; i < 3; i++)
    {
        sum += notes[i];
    }
    media = sum / 3;

    return media;
}

float MPonderada(float *notes)
{
    float pesos[3], sum = 0, pesototal, media;
    for (int i = 0; i < 3; i++)
    {
        printf("Peso %d: ", i + 1);
        scanf("%f", &pesos[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        sum = sum + (notes[i] * pesos[i]);
        pesototal += pesos[i];
    }

    media = sum / pesototal;
    return media;
    
}