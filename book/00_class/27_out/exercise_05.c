#include <stdio.h>

int absolute(int n);

int main()
{
    int vector[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Interger %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        vector[i] = absolute(vector[i]);
        printf("Absolute %d: %d\n", i, vector[i]);
    }
    return 0;
}

int absolute(int n)
{
    for(int i = 0; i < 5; i++)
    {
        if(n >= 0)
        {
            return n;
        }
        else
        {
            return n * (-1);
        }
    }
}