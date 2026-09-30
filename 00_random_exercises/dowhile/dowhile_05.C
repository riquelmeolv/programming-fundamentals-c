#include <stdio.h>

int main()
{
    int vetor[] = {};
    int i, cont = 0;

    do
    {
        printf("I: ");
        scanf("%d", &vetor);
        cont++;
    }while (i > 0 && i < 100);

    printf("Deu %d\n", cont - 1);
    
    return 0;
}