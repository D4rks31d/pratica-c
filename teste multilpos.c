#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1, n2;

   printf("Digite 2 numeros:\n");
   scanf("%i %i", &n1, &n2);

   if (n1%n2 == 0 || n2%n1 == 0)
   {
       printf("multiplos");
   }
   else
   {
       printf("nao multiplos");
   }

   return 0;
}
