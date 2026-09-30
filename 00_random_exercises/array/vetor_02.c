#include <stdio.h>

int main()
{
    int n[40];
    for(int i = 0; i < 40; i++)
    {
        printf("Informe o número %d: ", i);
        scanf("%d", &n[i]);
    }
    
    printf("Acabousse: ");
    for(int j = 0; j < 40; j++)
    {
        if(n[j] % 2 == 0)
        {
            printf("Par: %d\n", n[j]);
        }
    }


    return 0;
}