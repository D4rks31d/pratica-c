#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, sum;


    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    sum = x + y;

    printf("\n");
    printf("Soma: %d", sum);

    return 0;
}
