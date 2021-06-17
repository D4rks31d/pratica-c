#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sumNeg;

    printf("qual a ordem da matriz? ");
    scanf("%i", &n);

    int mat[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("elemento [%i,%i]:", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\nDiagonal principal:\n");

    for (int i=0;i<n;i++)
    {
        printf("%i ", mat[i][i]);
    }

    sumNeg=0;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (mat[i][j]<0)
            {
                sumNeg=sumNeg+1;
            }
        }
    }

    printf("\nQuantidade de negativos = %i", sumNeg);

    return 0;
}
