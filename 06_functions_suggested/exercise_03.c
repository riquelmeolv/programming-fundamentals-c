#include <stdio.h>

int binary(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Enter a number 1: ");
    scanf("%d", &n1);
    printf("Enter a number 2: ");
    scanf("%d", &n2);

    int result;
    result = binary(n1, n2);
    printf("The resulted is: %d\n", result);

    return 0;
}

int binary(int n1, int n2)
{
    int aux = 0;
    if(n1 % n2 == 0)
    {
        return 0;
    }
    else
    {
        aux = n2;
       while(n1 % aux != 0)
       {
        aux++;
       }
       return aux;
    }
    
}