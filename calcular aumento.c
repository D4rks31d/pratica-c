#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sal, nsal, aumento;
    int pct;

    printf("Salario: ");
    scanf("%lf", &sal);

    if (sal <= 1000)
    {
        nsal = sal*1.2;
    }
    else if (sal <= 3000)
    {
        nsal = sal*1.15;
    }
    else if (sal <= 8000)
    {
        nsal = sal*1.1;
    }
    else if (sal > 8000)
    {
        nsal = sal*1.05;
    }

    aumento = nsal-sal;
    pct = (aumento/sal)*100;

    printf("\nNovo salario: R$ %.2lf\n", nsal);
    printf("Aumento salarial: R$ %.2lf\n", aumento);
    printf("Porcentagem de aumento: %i%%\n", pct);

    return 0;
}
