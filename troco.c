#include <stdio.h>
#include <stdlib.h>

int main()
{
   double preco, recebimento, troco;
   int unidade;

   printf("Preço unitário do produto: ");
   scanf("%lf", &preco);
   printf("Quantidade comprada: ");
   scanf("%i", &unidade);
   printf("Dinheiro recebido: ");
   scanf("%lf", &recebimento);
   printf("\n");

   troco = recebimento-preco*unidade;

   printf("Troco: %.2lf", troco);
}
