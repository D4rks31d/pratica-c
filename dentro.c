#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, z, n, d, f;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &n);

    f = 0;
    d = 0;

    for (i=1;i<=n;i++)
    {
        printf("Digite um numero: ");
        scanf("%i", &z);
        if (z > 20 || z < 10)
        {
            f = f + 1;
        }
        else
        {
            d = d + 1;
        }
    }

    printf("\n%i dentro, %i fora", d, f);

    return 0;
}
