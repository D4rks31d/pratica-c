#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, area;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    area = pow(raio,2)*3.14159;

    printf("Area = %.3lf", area);

    return 0;
}
