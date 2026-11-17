#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter a number 1: ");
    scanf("%d", &n1);
    printf("Enter a number 2: ");
    scanf("%d", &n2);
    printf("Enter a number 3: ");
    scanf("%d", &n3);

    if(n1 > n2 && n2 > n3){
        printf("Sorting: %d %d %d\n", n3, n2, n1);
    }
    else if(n2 > n1 && n1 > n3){
        printf("Sorting: %d %d %d\n", n3, n1, n2);
    }
    else if(n3 > n2 && n2 > n1){
        printf("Sorting: %d %d %d\n", n1, n2, n3);
    }
    else if(n3 > n1 && n1 > n2){
        printf("Sorting: %d %d %d\n", n2, n1, n3);
    }
    else if(n1 > n3 && n3 > n2){
        printf("Sorting: %d %d %d\n", n2, n3, n1);
    }
    else{
        printf("Sorting: %d %d %d\n", n1, n3, n2);
    }

    return 0;
}