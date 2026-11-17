#include <stdio.h>

float sequence(int n);

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

float sequence(int n)
{
    float S = 0, frac;
    for(int i = 1; i <= n; i++)
    {
        frac = ((i * i) + 1.0) / (i + 3.0);
        S += frac;
    }
    return S;

}