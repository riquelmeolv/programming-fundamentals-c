#include <stdio.h>
#define N 2

void resulting(int numbers[N], int positive[N], int negative[N], int *contp, int *contn);

int main()
{
    int numbers[N], positive[N], negative[N];
    int contp = 0, contn = 0;
    for(int i = 0; i < N; i++)
    {
        printf("Position %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    resulting(numbers, positive, negative, &contp, &contn);

    printf("=== POSITIVE ===\n");

    for(int i = 0; i < contp; i++)
    {
        printf("Positive: %d\n", i + 1, positive[i]);
    }

    printf("=== NEGATIVE ===\n");

    for(int i = 0; i < contn; i++)
    {
        printf("Negative %d: %d\n", i + 1, negative[i]);
    }
    return 0;
}

void resulting(int numbers[N], int positive[N], int negative[N], int *contp, int *contn)
{   
    for(int i = 0; i < N; i++)
    {
        if(numbers[i] > 0)
        {
            positive[*contp] = numbers[i];
            (*contp)++;
        }
        else
        {
            negative[*contn] = numbers[i];
            (*contn)++;
        }
    }
}