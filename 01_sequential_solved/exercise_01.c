#include <stdio.h>

int main()
{
    int w, x, y, z, sum;
    printf("Envie 4 números: \n");
    scanf("%d", &w);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    sum = w + x + y + z;
    printf("The sum of all numbers is %d\n", sum);

    return 0;
}