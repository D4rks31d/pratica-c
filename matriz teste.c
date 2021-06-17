#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, l, c;
    double sumPos;

    printf("Ordem da matriz: ");
    scanf("%i", &N);

    double mat[N][N];

    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            printf("elemento [%i,%i]:", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    sumPos=0;

    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            if (mat[i][j]>0)
            {
                sumPos=sumPos+mat[i][j];
            }
        }
    }

    printf("\nSoma dos positivos: %.1lf\n", sumPos);

    printf("\nEscolha uma linha: ");
    scanf("%i", &l);

    printf("Linha escolhida: ");
    for (int j=0;j<N;j++)
    {
        printf("%.1lf ", mat[l][j]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%i", &c);

    printf("Coluna escolhida: ");
    for (int i=0;i<N;i++)
    {
        printf("%.1lf ", mat[i][c]);
    }

    printf("\n\nDiagonal principal:");
    for (int i=0;i<N;i++)
    {
        printf("%.1lf ", mat[i][i]);
    }

    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            if (mat[i][j]<0)
            {
                mat[i][j]=pow(mat[i][j],2);
            }
        }
    }

    printf("\n\nMatriz Alterada:\n");
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            printf("%.1lf ", mat[i][j]);
        }
        printf("\n");
    }
}
