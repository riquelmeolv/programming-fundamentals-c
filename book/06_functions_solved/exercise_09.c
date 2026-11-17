#include <stdio.h>
void maxmin(int *max, int *min, int numbers[]);

int main()
{
    int numbers[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Informe o número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0], min = numbers[0];

    maxmin(&max, &min, numbers);
    printf("Maior: %d\n", max);
    printf("Menor: %d\n", min);

    return 0;
}

void maxmin(int *max, int *min, int numbers[])
{
    for (int i = 0; i < 5; i++)
    {
        if(numbers[i] > *max)
        {
            *max = numbers[i];
        }
        if(numbers[i] < *min)
        {
            *min = numbers[i];
        }
    }
}