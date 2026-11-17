#include <stdio.h>

void primo(int *primos);

int main()
{
    int primos[3];

    primo(primos);

    for(int i = 0; i < 3; i++)
    {
        printf("Primo | %d\n", primos[i]);
    }
    return 0;
}

void primo(int *primos)
{
    int contc = 0, cont = 0, number = 100;
    while(contc < 3)
    {
        cont = 0;
        for(int i = 1; i <= number; i++)
        {
            if(number % i == 0)
            {
                cont++;
            }
        }
          
        if(cont == 2)
        {
            primos[contc] = number;
            contc++;
        }
        
        number++;
    }
}