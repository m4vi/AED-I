#include <stdio.h>
int Verificacao (int a, int b, int c)
{
    if (b+c < a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main ()
{
    int a, b, c, ret;
    printf("Digite um valor A: ");
    scanf("%d", &a);
    printf("Digite um valor B: ");
    scanf("%d", &b);
    printf("Digite um valor C: ");
    scanf("%d", &c);

    ret = Verificacao(a, b, c);
    printf("%d", ret);
    return 0;
}