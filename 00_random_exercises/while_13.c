#include <stdio.h>

int main()
{
    int n1, n2, n, temp;
    
    n1 = 0;
    n2 = 1;

    printf("Informe n: ");
    scanf("%d", &n);

    int i = n;
    while(i > 0)
    {
        printf("Número: %d\n", n1);
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        i--;
    }
    return 0;
}