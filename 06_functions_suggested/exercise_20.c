#include <stdio.h>

void city();

int main()
{
    city();
    return 0;
}

void city()
{
    float salary, max, perc;
    int children, sum = 0, mediac;
    float sums = 0, media, maior;

    int aux = 0, person = 0, cont380 = 0;
    while(aux == 0)
    {
        printf("0 - Continue\n1 - Break\n");
        scanf("%d", &aux);
        if(aux == 1)
        {
            break;
        }

        person++;
        printf("Salary: ");
        scanf("%f", &salary);
        printf("Children: ");
        scanf("%d", &children);
        
        sum += children;
        mediac = sum / person;

        printf("Média children: %d\n", mediac);

        sums += salary;
        media = salary / person;

        printf("Média salary: %.2f\n", media);

        if(person == 1)
        {
            maior = salary;
        }
        else
        {
            if(salary > maior)
            {
                maior = salary;
            }
        }

        printf("Maior: %.2f\n", maior);

        if(salary < 380)
        {
            cont380++;
        }

        perc = (cont380 / person) * 100;

        printf("Percentual: %.2f\n", perc);
        
    }
}