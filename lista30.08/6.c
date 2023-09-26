#include <stdio.h>
#include <math.h>
int ContaDigito(int num)
{
    int contador = 0;

    while (num != 0)
    {
        num /= 10;
        contador++;
    }

    return contador;
}

int inverso(int num_normal)
{
    // pow(base, expoente)
    int digito = 0, num_inverso, num_normal_verificacao;

    num_normal_verificacao = num_normal;
    //printf("\tnum verificacao %d", num_normal_verificacao);
    while (num_normal != 0)
    {
        for (int i = 2; i >= 0; i--)
        {
            digito = num_normal % 10;
            num_normal /= 10;
            num_inverso += digito * (pow(10, i));
            //printf ("\nnum inverso parcial %d", num_inverso);
        }
    }
    //printf("\tnum normal final%d", num_normal);
    //printf ("\tnum inverso final %d", num_inverso);
    if (num_inverso == num_normal_verificacao)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int saida, num_3_digito, num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    num_3_digito = ContaDigito(num);
    if (num_3_digito == 3) // se o numero conter 3 digitos
    {
        saida = inverso(num);
        printf("Saida %d", saida);
    }

    return 0;
}