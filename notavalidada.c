#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaMed;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    while (nota1 < 0 || nota1 > 10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &nota1);
    }

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    while (nota2 < 0 || nota2 > 10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &nota2);
    }

    notaMed = (nota1+nota2)/2;

    printf("\nMedia: %.1lf", notaMed);

    return 0;
}
