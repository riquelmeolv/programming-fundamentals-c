#include <stdio.h>

float volume(int raio);

int main()
{
    int raio;
    printf("Enter the raio: ");
    scanf("%d", &raio);

    float result = volume(raio);
    printf("The resulted is: %f\n", result);
    return 0;
}

float volume(int raio)
{
    float result;
    result = (4.0 / 3.0) * raio * raio * raio;
    return result;
}