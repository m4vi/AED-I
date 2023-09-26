#include <stdio.h>
int Menor_num(int n, int n2)
{
    if (n < n2)
    {
        return n;
    }
    else
    {
        return n2;
    }
}
int main()
{
    int n1, n2, menor;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    menor = Menor_num(n1, n2);
    printf("%d", menor);
    return 0;
}