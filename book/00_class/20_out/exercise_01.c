#include <stdio.h>

int main()
{
    int numbers[10];
    for(int i = 0; i < 10; i++)
    {
        printf("Posição %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    int reverse[10];
    for(int i = 0; i < 10; i++)
    {
        
        reverse[i] = numbers[9 - i];
    }

    for(int i = 0; i < 10; i++)
    {
        printf("Posição %d: %d\n", i, reverse[i]);
    }
    return 0;
}