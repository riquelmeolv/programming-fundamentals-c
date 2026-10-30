#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter a number 1: ");
    scanf("%d", &n1);
    printf("Enter a number 2: ");
    scanf("%d", &n2);

    if(n1 > n2)
    {
        printf("Number 1 greater\n");
    }
    else
    {
        printf("Number 2 greater\n");
    }
    return 0;
}