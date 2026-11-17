#include <stdio.h>

int main()
{
    float cont1 = 0 , cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, total = 0, porc1, porc2;
    int idade, n = 8;

    for(int i = 0; i < n; i++)
    {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        if(idade <= 15){
            cont1++;
            total++;    
        }
        else if(idade <= 30){
            cont2++;
            total++;
        }
        else if(idade <= 45){
            cont3++;
            total++;
        }
        else if(idade <= 60){
            cont4++;
            total++;
        }
        else{
            cont5++;
            total++;
        }
    }
    
    printf("Faixa 1: %.0f\nFaixa 2: %.0f\nFaixa 3: %.0f\nFaixa 4: %.0f\nFaixa 5: %.0f\n", cont1, cont2, cont3, cont4, cont5);
    porc1 = (cont1 * 100) / total;
    porc2 = (cont5 * 100) / total;
    printf("Porcentagem da faixa 1: %.1f%\n", porc1);
    printf("Porcentagem da faixa 5: %.1f%\n", porc2);
    return 0;
}