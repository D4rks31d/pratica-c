#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double delta, raiz1, raiz2;

    printf("Coeficiente a: ");
    scanf("%i", &a);

    printf("Coeficiente b: ");
    scanf("%i", &b);

    printf("Coeficiente c: ");
    scanf("%i", &c);

    delta = pow (b, 2) - 4 * a * c;

    if (delta < 0 || a == 0)
    {
        printf("\nEsta equacao nao tem raizes reais\n");
    }
    else
    {
       raiz1 = -b+sqrt(delta)/(2*a);
       raiz2 = -b-sqrt(delta)/(2*a);

       printf("\nx1 = %.4lf\n",raiz1);
       printf("x2 = %.4lf", raiz2);
    }
    return 0;
}
