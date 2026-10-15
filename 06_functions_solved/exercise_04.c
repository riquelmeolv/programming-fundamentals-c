#include <stdio.h>
void conversao(int seg);

int main()
{
    int seg;
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &seg);

    conversao(seg);
    return 0;
}
void conversao(int seg)
{
    float hora, minuto, segundo;
    hora = seg / 3600;
    seg = seg % 3600;

    minuto = seg / 60;
    segundo = seg % 60;

    printf("Horas: %.0fh\n", hora);
    printf("Minutos: %.0fmin\n", minuto);
    printf("Segundos: %.0fs\n", segundo);
}