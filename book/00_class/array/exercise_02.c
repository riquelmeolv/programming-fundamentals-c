#include <stdio.h>
#define N 6

int main()
{
    int vector[6]; 
    for(int i = 0; i < N; i++)
    {
        printf("Enter interger %d: ", i);
        scanf("%d", &vector[i]);
    }

    int greater = vector[0], smallest = vector[0];
    int indmax = 0, indmin = 0;

    for(int i =0; i < N; i++)
    {
        if(vector[i] > greater)
        {
            greater = vector[i];
            indmax = i;
        }
        if(vector[i] < smallest)
        {
            smallest = vector[i];
            indmin = i;
        }
    }

    printf("The greater number: %d\n", greater);
    printf("Position: %d\n", indmax);
    printf("The smallest number: %d\n", smallest);
    printf("Position: %d\n", indmin);

    return 0;
}