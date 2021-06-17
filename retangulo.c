#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, perimetro, diagonal, area;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = altura * base;
    diagonal = sqrt(pow(altura,2)+pow(base,2));
    perimetro = 2*(base+altura);

    printf("\nArea: %lf\n", area);
    printf("Diagonal: %lf\n", diagonal);
    printf("Perimetro: %lf\n", perimetro);

    return 0;
}
