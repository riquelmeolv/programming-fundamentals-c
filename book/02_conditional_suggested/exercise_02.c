#include <stdio.h>

int main()
{

    float note1, note2, media;

    printf("Provide 2 notes: \n");
    scanf("%f %f", &note1, &note2);

    media = (note1 + note2) / 2.0;

    printf("Sua média foi: %.1f\n", media);
    if(media >= 7 && media <=10)
    {
        printf("Approved! :)\n");
    }
    else if (media < 7 && media >= 3)
    {
        printf("Exam...\n");
    }
    else
    {
        printf("Failed...\n");
    }

    return 0;
}