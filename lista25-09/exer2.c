#include <stdio.h>

int main()
{
    int cont = 0;
    char palavra[20];
    printf("Digite a palavra: ");
    gets(palavra);

    for (int i = 0; i < 20; i++)
    {
        if (palavra[i] == 0)
        {
            break;
        }
        else
        {
            cont += 1;
        }
    }
    printf("%d", cont);

    return 0;
}