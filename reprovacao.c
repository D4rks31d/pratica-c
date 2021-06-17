#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaFim;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFim = nota1+nota2;

    printf("\nNota final: %.1lf\n", notaFim);

    if (notaFim < 60)
        {
        printf("\nReprovado");
    }
    return 0;
}
