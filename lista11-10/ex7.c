#include <stdio.h>
#include <ctype.h>
#include <string.h>

int contarConsoantes(char palavras[4][30])
{
    int consoantes = 0, mais_consoante_palavra = 0;

    for (int linha = 0; linha < 4; linha++)
    {

        for (int coluna = 0; palavras[linha][coluna] != '\0'; coluna++)
        {
            if (isalpha(palavras[linha][coluna])) // for letra
            {
                palavras[linha][coluna] = toupper(palavras[linha][coluna]); // transforma em maiuscula
                switch (palavras[linha][coluna])
                {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    break;

                default:
                    consoantes++;
                    break;
                }
            }
        }
        if (consoantes > mais_consoante_palavra)
        {
            mais_consoante_palavra = linha;
        }
        consoantes = 0;
    }

    printf("Palavra com mais consoante: %s", palavras[mais_consoante_palavra]);
}

int main()
{

    char minhasPalavras[4][30];
    for (int linha = 0; linha < 4; linha++)
    {
        printf("Digite uma string: ");
        fgets(minhasPalavras[linha], 30, stdin);
    }

    printf("\n As strings digitadas foram: \n");

    for (int linhas = 0; linhas < 3; linhas++)
    {
        printf("%s", minhasPalavras[linhas]);
    }

    contarConsoantes(minhasPalavras);

    return 0;
}
