#include <stdio.h>

int main()
{
    char usuario[30], senha[30];

    printf("cadastre usuario: ");
    gets(usuario);

    printf("cadastre senha: ");
    gets(senha);

    int tentativas = 3, autenticado = 0;
    char tent_usuario[30], tent_senha[30];

    while((tentativas>0) && (!autenticado))
    {
        printf("Digite usuario: ");
        gets(tent_usuario);

        printf("Digite senha: ");
        gets(tent_senha);

        if ((strcmp(usuario, tent_usuario) == 0 ) && (strcmp(senha, tent_senha) == 0))
        {
            autenticado = 1; // Autenticado com sucesso
        }
        else
        {
            tentativas--;;
            if (tentativas > 0)
            {
                printf("Login falhou. Tentativas restantes: %d\n", tentativas);
            }
            else
            {
                printf("Tentativas esgotadas. Encerrando o programa.\n");
            }
        }
    }

    return 0;
}