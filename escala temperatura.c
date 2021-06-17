#include <stdio.h>
#include <stdlib.h>

int main()
{
    double C, F;
    char escala;

    printf("Qual escala sera usada? ");
    scanf("%c", &escala);

    if (escala == 'C')
    {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F = (9*C/5)+32;
        printf("Temperatura equivalente em Fahrenheit: %.1lf", F);
    }
    else if (escala == 'F')
    {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);
        C = (F-32)*5/9;
        printf("Temperatura equivalente em Celsius: %.1lf", C);
    }

    return 0;
}
