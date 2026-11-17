#include <stdio.h>

float sequence(int value);

int main()
{
    int value;
    do
    {
        printf("Enter a value: ");
        scanf("%d", &value);
    }while(value < 1);

    float S = sequence(value);
    printf("The resulted is: %.2f\n", S);

    return 0;
}

float sequence(int value)
{
    float S = 0, frac;
    for(int i = 1; i <= value; i++)
    {
        frac = 1.0 / i;
        S += frac;
    }
    return S;

}