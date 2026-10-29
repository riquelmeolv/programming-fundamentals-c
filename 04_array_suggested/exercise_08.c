#include <stdio.h>
#define N 7

int main()
{
    char names[N][50];
    float medias[N];
    for(int i = 0; i < N; i++)
    {
        printf("Name: ");
        scanf("%s", &names[i]);
    }

    for(int j = 0; j < N; j++)
    {
        printf("Media %d: ", j + 1);
        scanf("%f", &medias[j]);
    }

    float max = medias[0], x; 
    int ind;
    for(int k = 0; k < N; k++)
    {
        if(medias[k] > max)
        {
            max = medias[k];
            ind = k;
        }
        if(medias[k] < 7)
        {
           x = 10 - medias[k];
           printf("O aluno %s precisa de uma nota: %.0f\n", names[k], x); 
        }
    }

    printf("A maior nota foi %.1f do aluno: %d\n", max, ind);
    return 0;
}