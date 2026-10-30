#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("3 números sequenciais:\n");
    printf("Enter a number 1: ");
    scanf("%d", &n1);
    printf("Enter a number 2: ");
    scanf("%d", &n2);
    printf("Enter a number 3: ");
    scanf("%d", &n3);

    printf("Enter a number four: ");
    scanf("%d", &n4);

    if(n4 > n3){
        printf("Sorting: %d %d %d %d\n", n4, n3, n2, n1);
    }
    else if(n4 < n1){
        printf("Sorting: %d %d %d %d\n", n3, n2, n1, n4);
    }
    else if(n4 < n3 && n4 > n2){
        printf("Sorting: %d %d %d %d\n", n3, n4, n2, n1);
    }
    else{
        printf("Sorting: %d %d %d %d\n", n3, n2, n4, n1);
    }
    return 0;
}