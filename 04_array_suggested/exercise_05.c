#include <stdio.h>
#define L 2
#define P 2

int main()
{
    int logic[L], programming[P];
    for(int i = 0; i < L; i++)
    {
        printf("ID Logic: ");
        scanf("%d", &logic[i]);
    }

    for(int j = 0; j < P; j++)
    {
        printf("ID Programming: ");
        scanf("%d", &programming[j]);
    }

    int cont = 0;
    for(int i = 0; i < L; i++)
    {
        for(int j = 0; j < P; j++)
        {
            if(logic[i] == programming[j])
            {
                cont++;
            }
        }
    }

    printf("Students who are in both: %d\n", cont);

    return 0;
}