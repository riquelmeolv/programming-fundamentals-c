#include <stdio.h>

int main()
{
    int n, result;
    printf("Given number for multiplication table: ");
    scanf("%d", &n);

    int i = 0;

    while (i <= 10)
    {
        result = i * n;
        printf("%d * %d = %d\n", n, i, result);
        i++;
    }
    
    return 0;
}