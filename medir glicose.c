#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gc;

    printf("Digite a medida da glicose: ");
    scanf("%i", &gc);
    printf("\nDiagnostico: ");

    if (gc <= 100)
    {
        printf("Normal");
    }
    else if (gc <= 140)
    {
        printf("Elevado");
    }
    else
    {
        printf("Diabetes");
    }

    return 0;
}
