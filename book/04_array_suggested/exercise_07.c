#include <stdio.h>
#define N 10

int main()
{
    int vector[N];
    for(int i = 0; i < N; i++)
    {
        printf("Integer %d: ", i + 1);
        scanf("%d" ,&vector[i]);
    }

    int contn = 0, sum = 0;
    for(int j = 0; j < N; j ++)
    {
        if(vector[j] < 0)
        {
            contn++;
        }
        else
        {
            sum += vector[j];
        }
    }

    printf("Negative numbers: %d\n", contn);
    printf("Sum of potive numbers: %d\n", sum);

    return 0;
}