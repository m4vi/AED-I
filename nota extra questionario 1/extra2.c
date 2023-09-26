#include <stdio.h>

int main()
{
    int idade;
    float salario_bruto, salario_liquido;

    printf("Sua Idade: ");
    scanf("%d", &idade);

    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);

    if ((idade >= 18 && idade <= 22) || (idade > 50))
    {
        printf("Isento");
    }
    else
    {
        if (salario_bruto < 1903.98)
        {
            printf("Isento");
        }
        else if (salario_bruto > 1903.99 && salario_bruto < 2826.65)
        {
            salario_liquido = salario_bruto * 0.925;
            printf("Salario liquido eh: %2.f", salario_liquido);
        }
        else if (salario_bruto > 2826.66 && salario_bruto < 3751.05)
        {
            salario_liquido = salario_bruto * 0.85;
            printf("Salario liquido eh: %2.f", salario_liquido);
        }
        else if (salario_bruto > 3751.06 && salario_bruto < 4664.68)
        {
            salario_liquido = salario_bruto * 0.775;
            printf("Salario liquido eh: %2.f", salario_liquido);
        }
        else if (salario_bruto > 4664.68)
        {
            salario_liquido = salario_bruto * 0.725;
            printf("Salario liquido eh: %2.f", salario_liquido);
        }
        else
        {
            printf("Opcao invalida");
        }
    }
    return 0;
}