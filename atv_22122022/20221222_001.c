#include <stdio.h>
# include <math.h>

int main(int argc, char const *argv[])
{
    float y, x1, x2;
    float sqrt;
    float modulo;

    for (int i = 1; i++;) {

    printf("Insira o valor Y: ");
    scanf("%f", &y);

    x1 = y/2;
    x2 = x1 - (pow(x1,2) - y) /2*x1;

    printf("x2 - x1 = %.2f\n", x2-x1);
    do
    {
        system("pause");
    } while (x2-x1 == 0.1);
    
    }

    sqrt = sqrt(y);
    printf("Valor sqrt = %.2f", sqrt);

    return 0;
}
