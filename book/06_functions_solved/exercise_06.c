#include <stdio.h>
void table(int number);

int main()
{
    int number;
    printf("Informe um número (1 a 9): ");
    scanf("%d", &number);

    table(number);
    return 0;
}

void table(int number)
{
    int temp;
    for(int i = 1; i <= number; i++)
    {
        temp = 0;
        for(int j = 0; j < i; j++)
        {
            temp = temp + i;
            printf("%d ", temp);
        }
        printf("\n");
    }
}