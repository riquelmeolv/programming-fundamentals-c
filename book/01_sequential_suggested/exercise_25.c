#include <stdio.h>

int main()
{
    int hora, minutos, horaMinutos, totalMinutos, segundos;
    printf("Informe a hora atual: ");
    scanf("%d:%d", &hora, &minutos);
    
    horaMinutos = (int)hora * 60;
    totalMinutos = horaMinutos + minutos;
    printf("A hora em minutos é: %d\n", horaMinutos);
    printf("O horário em minutos é: %d\n", totalMinutos);

    segundos = totalMinutos * 60;
    printf("Informe a quantidade de segundos: %d\n", segundos);

    return 0;
}