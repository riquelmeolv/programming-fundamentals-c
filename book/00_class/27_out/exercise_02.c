#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    return 0;
}

int posneg(int number)
{
    if(number > 0){
        printf("Positive!\n");
        return 1;
    }
    else if(number < 0){
        printf("Negative!\n");
        return -1;
    }
    else
    {
        printf("Zero!\n");
        return 0;
    }

}