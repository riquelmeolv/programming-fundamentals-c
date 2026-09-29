#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Nota: ");
        scanf("%d", &n);
    } while (n < 0 || n > 10);
    
    return 0;
}