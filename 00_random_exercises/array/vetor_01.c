#include <stdio.h>

int main()
{
    int n[40];
    for(int i = 0; i < 40;i++)
    {
        printf("Informe o número %d: ", i);
        scanf("%d", &n[i]);
    }

    printf("Acabou, esses são os números: ");
    for(int j = 0; j < 40; j++)
    {
        printf("%d,", n[j]);
    }
    
    return 0;
}
