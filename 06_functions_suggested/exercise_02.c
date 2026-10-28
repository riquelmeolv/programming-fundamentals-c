#include <stdio.h>

int conversion(int h, int m, int s);

int main()
{
    int hour, min, s;
    printf("Enter a hour: ");
    scanf("%d", &hour);
    printf("Enter a minutes: ");
    scanf("%d", &min);
    printf("Enter a seconds: ");
    scanf("%d", &s);

    int seconds;

    seconds = conversion(hour, min, s);
    printf("Seconds total: %d\n", seconds);

    return 0;
}

int conversion(int h, int m, int s)
{
    return (h * 60 * 60) + (m * 60) + s;
}