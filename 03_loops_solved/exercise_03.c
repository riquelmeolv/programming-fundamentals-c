#include <stdio.h>

int main()
{
    int n, fat;

    printf("Informe n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        fat = 1;
        printf("%d: ", i);
        for(int j = 1; j <= i; j++)
        {
            fat *= j;
        }
        printf("%d\n", fat);
    }
    return 0;
}