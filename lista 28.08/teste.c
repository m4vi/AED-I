#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numSorteado;

    srand(time(0));
    numSorteado = rand()%50;
    printf("%d",numSorteado);
    return 0;
}