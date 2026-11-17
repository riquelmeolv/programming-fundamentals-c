#include <stdio.h>
int main()
{

    int cod, cod_ton;
    float ton, imp, kg, t_kg, total;

    printf("Informe o código de origem (1 a 5): ");
    scanf("%d", &cod);
    if(cod < 1 || cod > 5)
    {
        return 1;
    }

    printf("Informe o peso em toneladas: ");
    scanf("%f", &ton);

    printf("Informe o código da carga (10 a 40): ");
    scanf("%d", &cod_ton);
    if (cod_ton < 10 || cod_ton > 10)
    {
        return 1;
    }

    kg = ton * 1000;
    printf("A carga tem: %.2f Kg\n", kg);

    if(cod_ton >= 10 && cod_ton <= 20)
    {
        t_kg = 100 * kg;
    }
    else if(cod_ton > 20 && cod_ton <= 30)
    {
        t_kg = 250 * kg;
    }
    else
    {
        t_kg = 340 * kg;
    }
    printf("O preço da carga é: R$%.2f\n", t_kg);

    if(cod == 1)
    {
        imp = t_kg * (35.0 / 100.0);
    }
    else if(cod == 2)
    {
        imp = t_kg * (25.0 / 100.0);
    }
    else if(cod == 3)
    {
        imp = t_kg * (15.0 / 100.0);
    }
    else if(cod == 4)
    {
        imp = t_kg * (5.0 / 100.0);
    }
    else
    {
        imp = 0;
    }

    total = t_kg + imp;
    printf("O custo total foi: R$%.2f\n", total);
    return 0;
}