#include <stdio.h>
#define N 5

int sumall(int *vector);

int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Enter integer %d: ", i);
        scanf("%d", &vector[i]);
    }

    int sum = sumall(vector);
    printf("The sum: %d\n", sum);

    return 0;
}

int sumall(int *vector)
{
    int sum = 0;
    for(int i =0; i < N; i++)
    {
        sum += vector[i];
    }

    return sum;
}