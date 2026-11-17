#include <stdio.h>

int search(int *media_cp, int *max_age, int *womens);

int main()
{
    int media_cp, max_age, womens;
    search(&media_cp, &max_age, &womens);
    printf("Media CP: %d\n", media_cp);
    printf("Idade maior: %d\n", max_age);
    printf("Mulheres: %d\n", womens);
    
}

int search(int *media_cp, int *max_age, int *womens)
{
    char sex[5], eyes[5], hairs[5];
    int ages[5];
    for(int i = 0; i < 5;i++)
    {
        printf("== answer with the initial of the word in caps ==\n");
        printf("Enter your sex: ");
        scanf(" %c", &sex[i]);
        printf("Enter the color of your eyes (Azul or Castanho): ");
        scanf(" %c", &eyes[i]);
        printf("Enter the color of your hair(Loiros or Pretos or Castanhos): ");
        scanf(" %c", &hairs[i]);
        printf("Enter your age: ");
        scanf("%d", &ages[i]);
    }

    int cont_age = 0, sum_age = 0;
    *womens = 0;
    *max_age = ages[0];
    for(int i = 0; i < 5; i++)
    {
        if(eyes[i] == 'C' && hairs[i] == 'P')
        {
            sum_age += ages[i];
            cont_age++;
        }
        if(ages[i] > *max_age)
        {
            *max_age = ages[i];
        }
        if(ages[i] >= 18 && ages[i] <= 25 && sex[i] == 'F' && eyes[i] == 'A' && hairs[i] == 'L')
        {
            (*womens)++;
        }
    }

    *media_cp = sum_age / cont_age;

    return 0;
}
