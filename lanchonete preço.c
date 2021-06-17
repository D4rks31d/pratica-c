#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, qtd;
    double preco;

    printf("Codigo: ");
    scanf("%i", &cod);
    printf("Quantidade: ");
    scanf("%i", &qtd);

    if (cod == 1)
    {
        preco = qtd*5;
    }
    else if (cod == 2)
    {
        preco = qtd*3.5;
    }
    else if (cod == 3)
    {
        preco = qtd*4.8;
    }
    else if (cod == 4)
    {
        preco = qtd*8.9;
    }
    else if (cod == 5)
    {
        preco = qtd*7.32;
    }

    printf("\nValor a pagar: %.2lf", preco);

    return 0;
}
