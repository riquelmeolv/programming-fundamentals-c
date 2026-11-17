#include <stdio.h>

int main()
{
    int i = 50;
    while (i >= 1)
    {
        if(i % 2 == 0)
        {
            printf("Número par %d\n", i);
        }
        i--;
    }
    
    return 0;
}