#include <stdio.h>
int main()
{
    float n, r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;
    printf("O número que você quer a tabuada: ");
    scanf("%f", &n);

    r0 = n * 0;
    r1 = n * 1;
    r2 = n * 2;
    r3 = n * 3;
    r4 = n * 4;
    r5 = n * 5;
    r6 = n * 6;
    r7 = n * 7;
    r8 = n * 8;
    r9 = n * 9;
    r10 = n * 10;

    printf("%.2f\n * 0 = %.2f\n", n, r0);
    printf("%.2f\n * 1 = %.2f\n", n, r1);
    printf("%.2f\n * 2 = %.2f\n", n, r2);
    printf("%.2f\n * 3 = %.2f\n", n, r3);
    printf("%.2f\n * 4 = %.2f\n", n, r4);
    printf("%.2f\n * 5 = %.2f\n", n, r5);
    printf("%.2f\n * 6 = %.2f\n", n, r6);
    printf("%.2f\n * 7 = %.2f\n", n, r7);
    printf("%.2f\n * 8 = %.2f\n", n, r8);
    printf("%.2f\n * 9 = %.2f\n", n, r9);
    printf("%.2f\n * 10 = %.2f\n", n, r10);
    
    return 0;
}