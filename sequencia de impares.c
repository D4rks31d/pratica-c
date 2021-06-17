#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;

    printf("Digite o valor de x: ");
    scanf("%i", &x);

    for (i=1; i<=x; i++)
    {
        if (i%2 != 0)
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
