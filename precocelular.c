#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    double preco;

    printf("Digite a quantidade de minutos: ");
    scanf("%i", &min);

    preco = 50+(min-100)*2;

    if (min <= 100)
    {
        printf("Valor a pagar: R$ 50.00");
    }
    else
    {
        printf("Valor a pagar: R$ %.2lf", preco);
    }

    return 0;
}
