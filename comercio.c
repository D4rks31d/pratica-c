#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int qtd, abaixo, acima, medio;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%i", &qtd);

    double precoC[qtd], precoV[qtd], lucrop[qtd], totalV, totalC, totalL;
    char nome[qtd][50];

    for (int i=0;i<qtd;i++)
    {
        printf("Produto %i:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i],50);
        printf("Preco de compra: ");
        scanf("%lf", &precoC[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoV[i]);
    }

    for (int i=0;i<qtd;i++)
    {
        lucrop[i]=100*(precoV[i]-precoC[i])/precoC[i];
    }

    abaixo=0;
    acima=0;
    medio=0;

    for (int i=0;i<qtd;i++)
    {
        if (lucrop[i] < 10)
        {
            abaixo=abaixo+1;
        }
        else if (lucrop[i] > 20)
        {
            acima=acima+1;
        }
        else
        {
            medio=medio+1;
        }
    }

    totalC=0;
    totalV=0;

    for (int i=0;i<qtd;i++)
    {
        totalC=totalC+precoC[i];
        totalV=totalV+precoV[i];
    }

    totalL=totalV-totalC;

    printf("\nRelatorio:\n");
    printf("\nLucro abaixo de 10%%: %i\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %i\n", medio);
    printf("Lucro acima de 20%%: %i\n", acima);
    printf("Valor total de compra: %.2lf\n", totalC);
    printf("Valor total de venda: %.2lf\n", totalV);
    printf("Valor total de lucro: %.2lf\n", totalL);

    return 0;
}
