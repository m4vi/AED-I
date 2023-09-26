#include <stdio.h>
void impares(int n1, int n2)
{
    for (int i = n1; i < n2; i++)
    {
        if (i % 2 != 0)
        {
            printf("\t%d", i);
        }
    }
}
int main()
{
    int n1, n2;
    printf("Digite o inicio do intervalo: ");
    scanf("%d", &n1);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &n2);

    impares(n1, n2);
    return 0;
}