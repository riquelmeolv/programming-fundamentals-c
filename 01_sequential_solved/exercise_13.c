#include <stdio.h>

int main()
{
    float pes, pol, jarda, milha;

    printf("Envie uma medida em pés: ");
    scanf("%f", &pes);

    pol = pes * 12.0;
    jarda = pes / 3.0;
    milha = jarda / 1760;

    printf("Polegadas: %.2f\n", pol);
    printf("Jardas; %.2f\n", jarda);
    printf("Milhas: %.2f", milha);
    return 0;
}