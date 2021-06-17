#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, menor;

    printf("Primeiro valor: ");
    scanf("%i", &a);
    printf("Segundo valor: ");
    scanf("%i", &b);
    printf("Terceiro valor: ");
    scanf("%i", &c);

    menor = a;

    if (menor > b)
    {
        menor = b;
    }

    if (menor > c)
    {
        menor = c;
    }

    printf("\nMenor: %i", menor);

    return 0;
}
