#include <stdio.h>
#define horas 24
#define minutos 60

int main()
{
    int h1, m1, h2, m2, h3, m3;
    printf("Envie a hora em que você começou a jogar(XX:YY): ");
    scanf("%d:%d", &h1, &m1);
    printf("Envie a hora em que você terminou de jogar(XX:YY): ");
    scanf("%d:%d", &h2, &m2);

    if(h1 < 24 && h2 < 24 && m1 < 60 && m2 < 60)
    {
        if(h2 > h1)
        {
            if(m2 > m1)
            {
                h3 = h2 - h1;
                m3 = m2 - m1;
                printf("O tempo de jogo foi de %d horas e %d minutos.\n", h3, m3);
            }
            else if (m2 < m1)
            {
                h3 = 0;
                m3 = (60 - m1) + m2;
                printf("O tempo de jogo foi de %d horas e %d minutos.\n", h3, m3);
            }
            else
            {
                h3 = h2 - h1;
                m3 = 0;
                printf("O tempo de jogo foi de %d horas e %d minutos.\n", h3, m3);
            }
        }
        else if(h1 > h2)
        {
            if(m1 > m2)
            {
                h3 = (horas - h1) + h2 - 1;
                m3 = (minutos - m1) + m2;
                printf("O tempo de jogo foi de %d horas e %d minutos.\n", h3, m3);
            }
            else if(m2 > m1)
            {
                h3 = (horas - h1) + h2;
                m3 = minutos - ((minutos - m2) + m1);
                printf("O tempo de jogo foi de %d horas e %d minutos.\n", h3, m3);
            }
            else
            {
                h3 = (horas - h1) + h2;
                m3 = 0;
                printf("O tempo de jogo foi de %d horas e %d minutos\n", h3, m3);
            }
        }
        else if (h2 == h1)
        {
            if(m2 == m1)
            {
                printf("Indefinido, pode ser 24hrs ou 0hrs.\n");
            }
            else if(m2 > m1)
            {
                h3 = 0;
                m3 = m2 - m1;
                printf("O tempo de jogo foi de %d horas e %d minutos.\n", h3, m3);
            }
            else
            {
                h3 = horas - 1;
                m3 = minutos - (m1 - m2);
                printf("O tempo de jogo foi de %d horas e %d minutos.\n", h3, m3);
            }
        }
    }
    else
    {
        printf("Hora ou minutagem inválidas\n");
    }
    return 0;
}
