#include <stdio.h>

int main()
{
    int n1, n2, n3, p1, p2, p3, mediapon;
    printf("Envie 3 Notas e seus respectivos pesos:\n");

    printf("n1:");
    scanf("%d", &n1);
    printf("p1:");
    scanf("%d", &p1);
    printf("n2:");
    scanf("%d", &n2);
    printf("p2:");
    scanf("%d", &p2);
    printf("n3:");
    scanf("%d", &n3);
    printf("p3:");
    scanf("%d", &p3);

    mediapon = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
    printf("media dos numeros:%d\n", mediapon);

    return 0;
}