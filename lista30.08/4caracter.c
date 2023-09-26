#include <stdio.h>
#include <ctype.h>

int alfabeto(char e)
{
    /*if (isalpha(e))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    */

    switch (e)
    {
    case 65 ... 90:
        return 1;
        break;
    case 97 ... 122:
        return 1;
        break;
    default:
        return 0;
        break;
    }
}
int main()
{
    char entrada;
    int saida;
    printf("digite a entrada: ");
    scanf("%c", &entrada);

    saida = alfabeto(entrada);
    printf("%d", saida);
}

// tbm tem a possibilidade de fazer uma verificacao manual
// mas seria muito demorado