#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    x = 1;
    y = 2;

    while (x != y)
    {
        printf("digite dois numeros: ");
        scanf("%i %i", &x, &y);
        if (x < y)
        {
            printf("Crescente\n");
        }
        else if (x > y)
        {
            printf("Descrescente\n");
        }
        else
        {
            printf("Cabou-lhes");
        }
    }

    return 0;
}
