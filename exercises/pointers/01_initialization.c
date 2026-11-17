#include <stdio.h>

int main(void)
{
    int var = 42;
    int *ptr = &var;

    printf("Variable 'Var' value: %d\n", var);
    printf("Variable 'Var' adress: %p\n", &var);
    printf("Pointer 'ptr' address (value of ptr): %p\n", ptr);
    printf("Value accessed via pointer (*ptr): %d\n", *ptr);
    return 0;
}