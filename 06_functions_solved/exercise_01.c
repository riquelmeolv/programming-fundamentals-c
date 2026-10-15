#include <stdio.h>

int paridade(int number);

int main()
{
    int number, result;
    printf("Informe um número: ");
    scanf("%d", &number);

    result = paridade(number);
    printf("O resultado é: %d\n", result);
    return 0;
}

int paridade(int number)
{
    if(number >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}