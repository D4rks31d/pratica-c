#include <stdio.h>
#include <stdlib.h>

int main()
{
    double medA, medB, medC, areaQd, areaTg, areaTz;

    printf("Medida A: ");
    scanf("%lf", &medA);
    printf("Medida B: ");
    scanf("%lf", &medB);
    printf("Medida c: ");
    scanf("%lf", &medC);

    areaQd = pow(medA, 2);
    areaTg = (medA*medB)/2;
    areaTz = (medA+medB)*medC/2;

    printf("\nArea do Quadrado: %.4lf\n", areaQd);
    printf("Area do Triangulo: %.4lf\n", areaTg);
    printf("Area do Trapezio: %.4lf", areaTz);

    return 0;
}
