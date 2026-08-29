#include <stdio.h>
int main()
// 12 12 2026
// 01 13 2027
{
    int d1, d2, m1, m2, a1, a2;
    printf("Envie a primeira data apenas com números(DD MM AAAA): ");
    scanf("%d %d %d", &d1, &m1, &a1);
    printf("Envie a segunda data apenas com números(DD MM AAAA): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    if(a1 > a2)
    {
        printf("%d/%d/%d\n", d1, m1, a1);
    }
    else if(a2 > a1)
    {
        printf("%d/%d/%d\n", d2, m2, a2);
    }
    else
    {
        if(m1 > m2)
        {
            printf("%d/%d/%d\n", d1, m1, a1);
        }
        else if(m2 > m1)
        {
            printf("%d/%d/%d\n", d2, m2, a2);
        }
        else
        {
            if(d1 > d2)
            {
                printf("%d %d %d\n", d1, m1, a1);
            }
            else if(d2 > d1)
            {
                printf("%d/%d/%d\n", d2, m2, a2);
            }
            else
            {
                printf("Datas iguais.");
            }
        }
    }

    return 0;
}