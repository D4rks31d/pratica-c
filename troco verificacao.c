#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, recebimento,  precoTotal, troco, insuficiente;
    int qtd;

    printf("Valor unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%i", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebimento);

    precoTotal = preco*qtd;
    troco = recebimento-precoTotal;
    insuficiente = abs(troco);

    if (troco<0)
    {
        printf("Dinheiro insuficiente, faltam R$ %.2lf", insuficiente);
    }
    else
    {
        printf("Troco: R$ %.2lf", troco);
    }

    return 0;
}
