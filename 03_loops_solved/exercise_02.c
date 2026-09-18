#include <stdio.h>
int main()
{
    int n, fat;
    float e;
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    e = 1;
    for(int i = 1; i <= n; i++)
    {
        fat = 1;
        for(int j = 1; j <= i; j++)
        {
           fat *= j;
        }
        e = e + (1.0 / fat);
    }
    printf("O valor de E: %.2f\n", e);
    return 0;
}