#include <stdio.h>
#include <math.h>

int main()
{
    float y = 0, x1 = 0, x2 = 0;
    float num = 0, den = 0;
    float diff = 0;

    printf("Insira o valor Y: ");
    scanf("%f", &y);
    /*
        // OPERAÇÃO

        x1 = y/2;

        num = pow(x1,2) - y;
        printf("num= %.2f\n", num);

        den = 2*x1;
        printf("den= %.2f\n", den);

        x2 = x1 - (num/den);
        diff = fabs(x2-x1);

        x1 = x2;

        printf("diff = %.2f\n", diff);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);

        system("pause");
    */

    x1 = y / 2;

    num = pow(x1, 2) - y;
    // printf("num= %.2f\n", num); // Debug
    den = 2 * x1;
    // printf("den= %.2f\n", den); // Debug

    x2 = x1 - (num / den);
    diff = fabs(x2 - x1);

    int i = diff;
    for (i; i >= 0.1;)
    {

        /* Debug
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
        printf("diff= %.2f\n", diff);
        */

        num = pow(x1, 2) - y;
        // printf("num= %.2f\n", num); // Debug

        den = 2 * x1;
        // printf("den= %.2f\n", den); // Debug

        x2 = x1 - (num / den);
        diff = fabs(x2 - x1);
        x1 = x2;

        while (diff == 0)
        {
            printf("\nA raiz vale %.2f\n", x2);
            printf("Encerrando programa... ");
            return 0;
        }
    }
    return 0;
}