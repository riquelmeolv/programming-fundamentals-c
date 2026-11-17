#include <stdio.h>
#define N 7

int main()
{
    float notes[N];
    for(int i = 0; i < N; i++)
    {
        printf("Enter note %d: ", i);
        scanf("%f", &notes[i]);
    }

    float sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum += notes[i];
    }

    float media;
    media = sum / 7.0;

    int cont = 0;
    for(int i = 0; i < N; i++)
    {
        if(notes[i] >= media)
        {
            printf("Position %d | Note %.2f\n", i, notes[i]);
            cont++;
        }
    }

    printf("%d Notes\n", cont);
    return 0;
}