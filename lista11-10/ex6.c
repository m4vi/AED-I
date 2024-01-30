#include <stdio.h>

float Menor(float matriz[3][5])
{
    float meno0r = matriz[0][0];

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            if (matriz[linha][coluna] < meno0r)
            {
                meno0r = matriz[linha][coluna];
            }
        }
    }

    return meno0r;
}

int iguais(float matriz[3][5])
{

    int contador = 0;
    float num;

    printf("Digite o valor para contar na matriz: ");
    scanf("%f", &num);

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            if (matriz[linha][coluna] == num)
            {
                contador++;
            }
        }
    }
    return contador;
}

int main()
{

    float matriz[3][5];

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    float menor_elemento;
    int cont_iguais;

    menor_elemento = Menor(matriz);

    cont_iguais = iguais(matriz);

    printf("Menor elemento: %f", menor_elemento);
    printf("\ncont igual: %d", cont_iguais);

    return 0;
}