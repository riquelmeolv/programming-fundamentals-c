#include <stdio.h>

int main()
{

    float number1, number2;
    
    printf("Provides two numbers: \n");
    scanf("%f %f", &number1, &number2);

    if (number1 > number2)
    {
        printf("The largest number is: %.2f\n", number1);
    }
    else
    {
        printf("The largest number is: %.2f\n", number2);
    }
    return 0;
}