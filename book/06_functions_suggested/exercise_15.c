#include <stdio.h>
#define N 5

void evennumbers(int *vector, int *contp);

int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Enter integer %d: ", i);
        scanf("%d", &vector[i]);
    }

    int contp = 0;
    evennumbers(vector, &contp);

    printf("The quatity of even numbers from X: %d\n", contp);

    return 0;
}

void evennumbers(int *vector, int *contp)
{
    for(int i = 0; i < N; i++)
    {
        if(vector[i] % 2 == 0)
        {
            (*contp)++;
        }
    }
}