#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, numIdade;
    double medIdade, sumIdade;

    printf("Digite as idades: ");
    scanf("%i", &idade);

    if (idade < 0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        sumIdade = 0;
        numIdade = 0;

        while (idade >= 0)
        {
            sumIdade = sumIdade + idade;
            numIdade = numIdade + 1;
            scanf("%i", &idade);
        }

        medIdade = sumIdade/numIdade;

        printf("Media: %.2lf", medIdade);

    }

    return 0;
}
