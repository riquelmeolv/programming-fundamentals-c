#include <stdio.h>

int main()
{
    int pes, pol, jarda, medida;
    float milha;

    printf("Escreva uma medida em pés:");
    scanf("%d", &pes);
    pol = pes * 12;
    jarda = pes / 3;
    milha = jarda / 1760.0;

    printf("a) Polegadas:%d\nb) Jardas:%d\nc) Milhas:%f\n", pol, jarda, milha);
 
    return 0;
}