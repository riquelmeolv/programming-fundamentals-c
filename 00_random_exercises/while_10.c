#include <stdio.h>

int main()
{
    int senha, resposta;
    senha = 145;

    while (senha != resposta)
    {
        printf("Informe a senha: ");
        scanf("%d", &resposta);
    }
    
    printf("Senha correta!\n");
    
    return 0;
}