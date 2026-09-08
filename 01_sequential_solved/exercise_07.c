#include <stdio.h>

int main()
{
    float sal_base, new_sal, grat, imp;
    printf("Informe seu salário base: ");
    scanf("%f", &sal_base);

    grat = 50;
    imp = sal_base * (10.0 / 100.0);

    new_sal = sal_base + grat - imp;
    printf("Seu novo salário: R$%.2f\n", new_sal);
    
    return 0;
}