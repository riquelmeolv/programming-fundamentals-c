#include <stdio.h>

float weight(float alt, char sexo); 
  
int main()
{
    float alt;
    char sexo;

    printf("Enter your height: ");
    scanf("%f", &alt);

    printf("Enter you sex(M or F): ");
    scanf(" %c", &sexo);

    float idweight;
    idweight = weight(alt, sexo);

    printf("Ideal weight: %.2f\n", idweight);

    return 0;
}

float weight(float alt, char sexo)
{
    int idweight;
    if(sexo == 'M')
    {
        idweight = (72.7 * alt) - 58;
    }
    else
    {
        idweight = (62.1 * alt) - 44.7;
    }

    return idweight;
}