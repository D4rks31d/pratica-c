#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hrf, hri, tt;

    printf("Hora inicial: ");
    scanf("%i", &hri);
    printf("Hora final: ");
    scanf("%i", &hrf);

    if (hrf < hri)
    {
        tt = 24-hri+hrf;
    }
    else if (hrf > hri)
    {
        tt = hrf-hri;
    }
    else
    {
        tt = 24;
    }

    printf("\nO jogo durou %i horas", tt);
}
