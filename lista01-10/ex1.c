#include <stdio.h>

int letraA(char palavra[30])
{
    int cont = -1;
    for (int i = 0; i < 30; i++)
    {
        if (palavra[i] == 'a')
        {
            cont++;
        }
    }
    return cont;
}
int main()
{
    char palavra[30];
    int retorno;

    printf("Digite uma palavra: ");
    gets(palavra);

    retorno = letraA(palavra);
    printf("%d", retorno);
    return 0;
}