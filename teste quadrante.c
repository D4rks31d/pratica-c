#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    while (x != 0 && y != 0)
    {
        printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%i %i", &x, &y);

        if (x > 0 && y > 0)
        {
            printf("\nQ1\n");
        }
        else if (x > 0 && y < 0)
        {
            printf("\nQ4\n");
        }
        else if (x < 0 && y < 0)
        {
            printf("\nQ3\n");
        }
        else if (x < 0 && y > 0)
        {
            printf("\nQ2\n");
        }
    }
}
