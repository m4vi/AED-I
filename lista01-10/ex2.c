#include <stdio.h>
#include <ctype.h>

int letra_numeros(char palavra[30])
{
    int letras = 0, numeros = 0;

    for (int i = 0; i < 30; i++)
    {
        if (isalpha(palavra[i]))
        {
            letras++;
        }
        else if (isdigit(palavra[i]))
        {
            numeros++;
        }
    }

    printf("Letras: %d", letras);
    printf("\n Numeros: %d", numeros);
}

int main()
{
    char palavra[30];

    printf("Digite uma palavra: ");
    gets(palavra);

    letra_numeros(palavra);

    return 0;
}