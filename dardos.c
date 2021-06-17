#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distancia1, distancia2, distancia3, maior;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &distancia1);
    scanf("%lf", &distancia2);
    scanf("%lf", &distancia3);

    maior = distancia1;

    if (maior < distancia2)
    {
        maior = distancia2;
    }
    else{}
    if (maior < distancia3)
    {
        maior = distancia3;
    }

    printf("\nMaior distancia: %.2lf", maior);

    return 0;
}
