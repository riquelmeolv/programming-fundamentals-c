#include <stdio.h>
#define N 2

int main()
{
    int code[N], cont[N], customer_code, product_code, customer_cont, found;
    for(int i = 0; i < N; i++)
    {
        printf("Enter product code: ");
        scanf("%d", &code[i]);
        printf("Enter a quantity: ");
        scanf("%d", &cont[i]);
    } 

    while(1)
    {
        printf("Enter a client code: ");
        scanf("%d", &customer_code);

        if(customer_code == 0)
        {
            break;
        }

        printf("Enter product code: ");
        scanf("%d", &product_code);

        printf("Enter a quantity: ");
        scanf("%d", &customer_cont);

        found = 0;

        for(int i = 0; i < N; i++)
        {
            if(code[i] == customer_code)
            {
                found = 1;

                if(cont[i] >= customer_cont && customer_cont > 0)
                {
                    printf("Pedido atendido. Obrigado, volte sempre!");
                    cont[i] -= customer_cont;
                }
                else
                {
                    printf("Estoque insuficiente.");
                }

                break;
            }
        }

        if(found == 0)
        {
            printf("Código inexistente.\n");
        }

        break;
    }

    for(int m = 0; m < N; m++)
    {
        printf("Code %d | Quantity %d\n", code[m], cont[m]);
    }

    return 0;
}