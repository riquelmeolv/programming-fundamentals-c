#include <stdio.h>

int main()
{
    float comprimento, largura, area, potencia;
    printf("Informe o comprimento do cômodo em metros: ");
    scanf("%f", &comprimento);
    printf("Infrome a largura do cômodo em metros: ");
    scanf("%f", &largura);

    area = comprimento * largura;
    potencia = area * 18;

    printf("Sua área é: %.2fm\n", area);
    printf("A potência necessária é: %.2fW\n", potencia);
    
    return 0;
}