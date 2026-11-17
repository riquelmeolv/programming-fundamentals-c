#include <stdio.h>

int main()
{
    int a, b, c, d;
    for(int i = 0; i < 5; i++)
    {
        printf("a: ");
        scanf("%d", &a);
        printf("b: ");
        scanf("%d", &b);
        printf("c: ");
        scanf("%d", &c);
        printf("d: ");
        scanf("%d", &d);

        printf("%d-%d-%d-%d\n", a, b, c, d);
        if(a > b && a > c && a > d)
        {

        }
        else if(b > a && b > c && b > d)
        {

        }
        else if(c > a && c > b && c > d)
        {

        }
        

    }
    return 0; 
}