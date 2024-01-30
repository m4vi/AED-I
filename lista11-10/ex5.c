#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char minhasPalavras[5][50];
    for (int linha = 0; linha < 3; linha++)
    {
        printf("Digite uma string: ");
        fgets(minhasPalavras[linha], 50, stdin);
    }

    printf("\n As strings digitadas foram: \n");

    for (int linhas = 0; linhas < 3; linhas++)
    {
        printf("%s", minhasPalavras[linhas]);
    }

    int maiorTamanho = 0, indiceMaior = 0;

    for (int i = 0; i < 5; i++)
    {
        int tamanhoAtual = strlen(minhasPalavras[i]);//retorna o tamanho de uma string 
        if (tamanhoAtual > maiorTamanho)
        {
            maiorTamanho = tamanhoAtual;
            indiceMaior = i;
        }
    }

    printf("A maior string é: %s\n", minhasPalavras[indiceMaior]);

    return 0;
}