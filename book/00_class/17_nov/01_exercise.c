#include <stdio.h>

int main(void)
{
    char str[] = "Riquelme";

    int cont;
    for(cont = 0; str[cont] != '\0'; cont++);    

    printf("The string is: %s\n", str);
    printf("The lenght of the string is: %d\n", cont);
    
    return 0;
}