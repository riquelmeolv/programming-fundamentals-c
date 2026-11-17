#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, r1, r2;
    printf("Envie um número maior que 0: ");
    scanf("%f",&n1);
    printf("Envie outro número maior que 0: ");
    scanf("%f", &n2);

    r1 = pow(n1, n2);
    r2 = pow(n2, n1);

    printf("O primeiro elevado ao segundo: %.2f\nO segundo elevado ao primeiro: %.2f\n", r1, r2);

    return 0;
}