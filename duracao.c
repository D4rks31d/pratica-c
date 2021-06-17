#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segTotal, segHora, segMin, seg, min, hr;

    printf("Digite a duracao em segundos: ");
    scanf("%i", &segTotal);

    hr = segTotal/3600;
    segHora = hr*3600;
    min = (segTotal-segHora)/60;
    segMin = min*60;
    seg = (segTotal-segHora-segMin);
    printf("\n%i:%i:%i", hr, min, seg);

    return 0;

    }
