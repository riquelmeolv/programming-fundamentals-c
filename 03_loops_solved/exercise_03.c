#include <stdio.h>

int main()
{
    int n, x, fat;

    printf("Informe n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        fat = 1;
        printf("Número %d: ", i);
        scanf("%d", &x);
        
        for(int j = 1; j <= x; j++)
        {
            fat *= j;
        }
        printf("Resposta: %d\n", fat);
    }
    return 0;
}