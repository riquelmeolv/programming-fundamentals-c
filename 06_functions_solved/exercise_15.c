#include <stdio.h>

// Prototype
void sorting(int *v, int *s);

int main()
{
    int numbers[5], sort[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Posição %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    sorting(numbers, sort);

    for(int i = 0; i < 5; i++)
    {
        printf("Sort %d: %d\n", i + 1, sort[i]);
    }

    return 0;
}

// Selection Sort
void sorting(int *v, int *s)
{
    for(int i = 0; i < 5; i++)
    {
        s[i] = v[i];
    }

    int aux, temp;
    for(int i = 0; i < 4; i++)
    {
        aux = i;
        for(int j = i + 1; j < 5; j++)
        {
            if(s[j] < s[aux])
            {
                aux = j;
            }
        }

        temp = s[i];
        s[i] = s[aux];
        s[aux] = temp;
    }
}