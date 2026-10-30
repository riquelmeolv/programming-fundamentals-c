#include <stdio.h>
#define N 5
int main()
{
    int vector[N], primos[N],contp = 0, cont = 0;
    for( int i =0; i < N; i++)
    {
        printf("Integer %d: ", i);
        scanf("%d", &vector[i]);
    }

    for(int i = 0; i < N; i++)
    {
        cont = 0;
        for(int j = 1; j <= vector[i]; j++)
        {
            if(vector[i] % j == 0)
            {
                cont++;
            }
        }

        if(cont == 2)
        {
            primos[contp] = vector[i];
            contp++;
        }
    }

    for(int i = 0; i < contp; i++)
    {
        printf("Primo | %d\n", primos[i]);
    }
    return 0;
}