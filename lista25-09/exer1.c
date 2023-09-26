#include <stdio.h>
double Media(double nota1, double nota2, double nota3)
{
    if (((nota1 >= 0) && (nota1 <= 10)) && ((nota2 >= 0) && (nota2 <= 10)) && ((nota3 >= 0) && (nota3 <= 10)))
    {
        return ((nota1 + nota2 + nota3) / 3);
    }
    else
        return -1; // nota invalida
}
int main(void)
{
    double n1, n2, n3, media;

    printf("Digite a nota 1: \n");
    scanf("%lf", &n1);
    printf("Digite a nota 2: \n");
    scanf("%lf", &n2);
    printf("Digite a nota 3: \n");
    scanf("%lf", &n3);

    media = Media(n1, n2, n3);
    if (media == -1)
    {
        printf("Uma das entradas eh uma Nota invalida.");
    }
    else
    {
        printf("Media: %lf", media);
    }

    return 0;
}