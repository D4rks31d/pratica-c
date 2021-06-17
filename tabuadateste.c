#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma, troca;

    printf("digite os valores:\n");
    scanf("%i %i", &x, &y);

    soma = 0;

    if (x < y)
    {
        troca = x;
        x = y;
        y = troca;
    }

    for (int i = y+1; i < x; i++)
    {
        if (i%2 != 0)
        {
            soma = soma + i;
        }
    }

    printf("Soma dos impares: %i", soma);

    return 0;
}
