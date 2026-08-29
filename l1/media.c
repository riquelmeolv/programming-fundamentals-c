#include <stdio.h>

int main()
{
    int n1, n2, n3, media;
    printf("Envie 3 Notas:\n");

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    media = (n1 + n2 + n3)/3;
    printf("A media dos numeros é:%d\n", media);

    return 0;
}