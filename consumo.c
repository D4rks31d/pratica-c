#include <stdio.h>
#include <stdlib.h>

int main()
{
    double consumoMedio, gasto, distancia;

    printf("Distancia percorrida: ");
    scanf("%lf", &distancia);

    printf("Combustivel gasto: ");
    scanf("%lf", &gasto);

    consumoMedio = distancia/gasto;

    printf("\nConsumo medio: %.3lf", consumoMedio);

    return 0;
}
