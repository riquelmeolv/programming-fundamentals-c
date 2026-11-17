#include <stdio.h>

int main()
{
    float n1, n2, n3, med;
    int p1 = 2, p2 = 3, p3 = 5;
    
    printf("Enter a note 1: ");
    scanf("%f", &n1);
    printf("Enter a note 2: ");
    scanf("%f", &n2);
    printf("Enter a note 3: ");
    scanf("%f", &n3);

    med = (((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3));
    printf("Media: %.2f\n", med);

    if(med >= 8 && med <=10)
    {
        printf("Concept A\n");
    }
    else if(med >= 7)
    {
        printf("Concept B\n");
    }
    else if(med >= 6)
    {
        printf("Concept C\n");
    }
    else if(med >= 5)
    {
        printf("Concept D\n");
    }
    else
    {
        printf("Concept E\n");
    }
    return 0;
}