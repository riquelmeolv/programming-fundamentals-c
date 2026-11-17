#include <stdio.h>
#define N 2

void read(int *age, int *children,char *sexo, float *salary);
float media(float *salary);
void age_maxmin(int *age, int *max, int *min);
int womens(char *sexo, int *children, float *salary);

// Faz o L
int main()
{
    int age[N], children[N];
    float salary[N];
    char sexo[N];

    read(age, children, sexo, salary);

    float media_sal;
    media_sal = media(salary); 

    int max, min;
    age_maxmin(age, &max, &min);

    int qtd = womens(sexo, children, salary);

    printf("The media: %.2f\n", media_sal);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Qtd: %d\n", qtd);

    return 0;
}

void read(int *age, int *children, char *sexo, float *salary)
{
    for(int i = 0; i < N; i++)
    {
        printf("Player %d: \n", i);
        printf("Age: ");
        scanf("%d", &age[i]);
        printf("How many children: ");
        scanf("%d", &children[i]);
        printf("Sexo: ");
        scanf(" %c", &sexo[i]);
        printf("Salary: ");
        scanf("%f", &salary[i]);
    }
}

float media(float *salary)
{
    float sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum += salary[i];
    }

    float media;
    media = sum / N;
    return media;
}

void age_maxmin(int *age, int *max, int *min)
{
    *max = age[0];
    *min = age[0];
    for(int i = 0; i < N; i++)
    {
        if(age[i] > *max);
        {
            *max = age[i];
        }
        if(age[i] < *min)
        {
            *min = age[i];
        }
    }
}

int womens(char *sexo, int *children, float *salary)
{
    int qtd = 0;
    for(int i = 0; i < N; i++)
    {
        if(sexo[i] == 'F' || sexo[i] == 'f')
        {
            if(children[i] == 3)
            {
                if(salary[i] <= 500)
                {
                    qtd++;
                }
            }
        }
    }
    return qtd;
}
