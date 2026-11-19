#include <stdio.h>

int main(void)
{
    
    return 0;
}

#include <stdio.h>

int main(void)
{
    int a = 10;
    float b = 20.5f;
    int *pa = &a;
    
    printf("Adress of integer variable 'a': %p\n", &a);
    printf("Adress of float variable 'b': %p\n", &b);
    printf("Adress stored IN ponteir pa: %p\n", pa);
    printf("Adress of pointer variable 'pa': %p\n", &pa);

    return 0;
}