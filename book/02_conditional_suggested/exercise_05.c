#include <stdio.h>

int main()
{

    float number1, number2, media, difference, product, division;
    int operation;

    printf("Provides two numbers, the second number should be different 0: \n");
    scanf("%f %f", &number1, &number2);

    printf("Which operation between the numbers do you need?\n");
    printf("1 --- Media\n2 --- Difference\n3 --- Product\n4 --- Division\n");
    printf("Answer: ");
    scanf("%d", &operation);

    if (operation > 4 || operation < 1)
    {
        printf("Invalid operation...\n");
        return 1;
    }

    if(operation == 1)
    {
        media = (number1 + number2) / 2.0;
        printf("The media of two numbers is: %.2f\n", media);
    }
    else if (operation == 2)
    {
        if(number1 > number2)
        {
            difference = number1 - number2;
            printf("The difference between largest number and small number is: %.2f\n", difference);
        }
        else if(number1 == number2)
        {
            printf("The diffence between two numbers equal is: %.0f\n", difference);
        }
        else
        {
            difference = number2 - number1;
            printf("The difference between largest number and small number is: %.2f\n", difference);
        }
    }
    else if(operation == 3)
    {
        product = number1 * number2;
        printf("The product between the two numbers is: %.2f\n", product);
    }
    else
    {
        division = number1 / number2;
        printf("The division between first number and second number is: %.2f\n", division);
    }
    return 0;
}