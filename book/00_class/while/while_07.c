#include <stdio.h>

int main()
{
    int n, fat;

    printf("Informe o número para fatotial: ");
    scanf("%d", &n);

    fat = 1;
    while (n >= 1)
    {
        fat *= n;
        n--;
    }
    printf("Fatorial: %d\n", fat);
    
    return 0;
}