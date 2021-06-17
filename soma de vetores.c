#include <stdio.h>

int main()
{
    int n;

    printf("quantos numeros voce vai digitar? ");
    scanf("%i", &n);

    double sum, med, vet[n];

    sum=0;

    for (int i=0;i<n;i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        sum=sum+vet[i];
    }

    med=sum/n;

    printf("Valores = ");
    for (int i=0;i<n;i++)
    {
        printf("%.1lf ", vet[i]);
    }

    printf("\nSoma = %.2lf\n", sum);
    printf("Media =%.2lf", med);

    return 0;
}
