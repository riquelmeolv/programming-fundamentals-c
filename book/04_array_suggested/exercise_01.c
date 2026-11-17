#include <stdio.h>

int main()
{
    int vector[6], even[6], odd[6], conteven, contodd;
    // Reading numbers from the user
    for(int i = 0; i < 6; i++)
    {
        printf("Enter a number %d: ", i);
        scanf("%d", &vector[i]);
    }

    // Classifying numbers as even or odd and couting each
    conteven = 0, contodd = 0;
    for(int j = 0; j < 6; j++)
    {
        if(vector[j] % 2 == 0)
        {
            even[conteven] = vector[j];
            conteven++;
        }
        else
        {
            odd[contodd] = vector[j];
            contodd++;
        }
    }

    // Printing the numbers
    printf("Number of even numbers: %d\n", conteven);
    printf("Number of odd numbers: %d\n", contodd);

    printf("Even numbers: ");
    for(int k = 0; k < conteven; k++)
    {
        printf("%d ", even[k]);
    }
    printf("\n");
    printf("Odd numbers: ");
    for(int j = 0; j < contodd; j++)
    {
        printf("%d ", odd[j]);
    }
    printf("\n");

    return 0;
}