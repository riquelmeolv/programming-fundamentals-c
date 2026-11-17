#include <stdio.h>

int main()
{
    float number1, number2, number3;

    printf("Provide three numbers: \n");
    scanf("%f %f %f", &number1, &number2, &number3);

    if(number1 > number2 && number1 > number3)
    {
        printf("The largest number is: %.2f\n", number1);
    }
    else if(number2 > number1 && number2 > number3)
    {
        printf("The largest number is: %.2f\n", number2);
    }
    else if(number1 == number2 == number3)
    {
        printf("Three numbers equal.\n");
    }
    else 
    {
        printf("The largest number is: %.2f\n", number3);
    }

    return 0;
}