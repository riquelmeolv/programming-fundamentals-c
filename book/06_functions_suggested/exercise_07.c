#include <stdio.h>

void media(float *sum, float *cont, float *med);

int main()
{
    float sum = 0, cont = 1, med = 0;

    media(&sum, &cont, &med);

    return 0;
}

void media(float *sum, float *cont, float *med)
{
    int answer = 1;
    float number;
    while(answer != 0)
    {
        printf("Enter a number %.0f: ", *cont);
        scanf("%f", &number);

        if(number == 0)
        {
            answer = 0;
        }

        *sum += number;
        *med = *sum / *cont;

        printf("Media: %.2f\n", *med);

        (*cont)++;
    }
}