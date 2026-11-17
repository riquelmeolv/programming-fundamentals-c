#include <stdio.h>

int main()
{
    float n, x, s, d, exp, fat, passo;
    printf("Informe a quantidade de termos: ");
    scanf("%f", &n);
    printf("Informe o valor de x: ");
    scanf("%f", &x);

    s = 0;
    d = 1;
    passo = 1;
    for(int i = 1; i <= n; i++)
    {
        exp = 1;
        for(int j = 0; j <= i; j++)
        {
            exp *= x;
        }

        fat = 1;
        for(int f = 1; f <= d; f++)
        {
            fat *= f;
        }

        if(i % 2 == 0)
        {
            s += exp;
        }
        else
        {
            s -= exp;
        }

        if(d == 4)
        {
          passo -= 1;  
        } 
        else
        {
            passo += 1;
        }
        d += passo;
    } 
    
    return 0;
}