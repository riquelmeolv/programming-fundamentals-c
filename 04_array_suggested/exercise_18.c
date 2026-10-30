#include <stdio.h>
#define N 15

int main()
{
    int vector[N], max, indmax, min, indmin;
    for(int i = 0; i < N;i++)
    {
        printf("Enter a number %d: ", i);
        scanf("%d", &vector[i]);
    }

    max = vector[0], indmax = 0;
    min = vector[0], indmin = 0;
    for(int j = 0; j < N; j++)
    {
        if(vector[j] > max)
        {
            max = vector[j];
            indmax = j;
        }
        if(vector[j] < min)
        {
            min = vector[j];
            indmin = j;
        }
    }

    printf("Greater %d | Position %d\n", max, indmax);
    printf("Smallest %d | Position %d\n", min, indmin);

    return 0;
}