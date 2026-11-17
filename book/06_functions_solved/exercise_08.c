#include <stdio.h>
int minutagem(int h1, int min1, int h2, int min2);
// 2:30, 1:50
int main()
{
    int h1, min1, h2, min2, minfinal;
    printf("Informe a hora de inicio do jogo: ");
    scanf("%d", &h1);
    printf("Informe os minutos de inicio do jogo: ");
    scanf("%d", &min1);

    printf("Informe a hora de término do jogo: ");
    scanf("%d", &h2);
    printf("Informe os minutos de término do jogo: ");
    scanf("%d", &min2);

    minfinal = minutagem(h1, min1, h2, min2);
    printf("A quantidade de minutos foi: %dmin\n", minfinal);

    return 0;
}

int minutagem(int h1, int min1, int h2, int min2)
{
    int hours, mintemp, mintotal;
    if(h2 > h1)
    {
        mintotal = (h2 * 60 + min2) - (h1 * 60 + min1);
    }
    else
    {
        mintotal = (((24 - h1) + h2) * 60) + (min2 - min1);
    }

    return mintotal;
}