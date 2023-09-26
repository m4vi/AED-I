#include <stdio.h>

int main()
{
    int cont = 1; // Inicializa o contador com 1, pois o produto começa como 1

    for (int i = 1; i <= 15; i++) // Percorre os números de 1 a 15
    {
        int divisores = 0;

        for (int p = 1; p <= i; p++) // Verifica os divisores de i
        {
            if (i % p == 0)
            {
                divisores++;
            }
        } // Fim do loop para verificar divisores

        if (divisores == 2) // i é primo se tiver exatamente 2 divisores
        {
            cont *= i; // Multiplica i ao contador
        }
    } // Fim do loop principal

    printf("O produto dos numeros primos entre 1 e 15: %d\n", cont);
    return 0;
}