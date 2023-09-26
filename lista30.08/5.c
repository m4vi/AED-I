#include <stdio.h>
int primo(int soma)
{
    int divisores = 0;
    for (int i = 1; i < (soma / 2); i++)
    {
        if (soma % i == 0)
        {
            divisores += 1;
        }
    }
    if (divisores == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int somaDigitos(int n)
{
    int soma = 0, saida;
    while (n != 0)
    {
        soma += n % 10;
        n /= 10;
        //printf("\tsoma: %d", soma);
    }
    printf("\nsoma final: %d", soma);
    saida = primo(soma);
    return saida;
}
int main()
{
    int n1, saida;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    saida = somaDigitos(n1);
    printf("\nsaida final: %d", saida);
    return 0;
}