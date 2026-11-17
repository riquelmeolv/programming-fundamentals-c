#include <stdio.h>

int main()
{
    int X[10], Y[10], Union[20];
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor X posição %d: ", i + 1);
        scanf("%d", &X[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor Y posição %d: ", i + 1);
        scanf("%d", &Y[i]);
    }

    for(int i = 0; i < 20; i++)
    {
        if(i <= 9)
        {
           Union[i] = X[i]; 
        }
        else
        {
            for(int j = 0; j < 10; j++)
            {
                for(int k = 0; k < 10; k++)
                {
                    
                }
            }
        }
    }
    

    return 0;
}