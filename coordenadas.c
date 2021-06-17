#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;

    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);

    if (x == 0 || y == 0)
    {
        printf("\nOrigem");
    }
    else if (x > 0 && y > 0)
    {
        printf("\nQ1");
    }
    else if (x > 0 && y < 0)
    {
        printf("\nQ4");
    }
    else if (x < 0 && y < 0)
    {
        printf("\nQ3");
    }
    else if (x < 0 && y > 0)
    {
        printf("\nQ2");
    }
    else if (x == 0)
    {
        printf("\nEixo X");
    }
    else if (y == 0)
    {
        printf("\nEixo Y");
    }

    return 0;
}
