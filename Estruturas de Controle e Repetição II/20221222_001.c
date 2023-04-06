/*
-----------------------------------------------------------------------------
Fazer um programa para calcular a raiz quadrada de um
número positivo usando o roteiro abaixo (baseado no método de
aproximaçõessucessivas de Newton-Raphson). Seja Y o número para o qual se
quer computar a raiz quadrada:
● A primeira aproximação para a raiz quadrada de Y é dada por:

● As demais aproximações são calculadas pela seguinte fórmula de
recorrência:

● A aproximação deve continuar até que o valor obtido mude pouco
com o passar das iterações (menos de e = 0.1), Ou seja:

● Compare o resultado obtido com o resultado produzido pela função
sqrt() disponível na biblioteca <math.h>:
Obs.: O valor absoluto | . | pode ser calculado através da função fabs(),
disponível na biblioteca <math.h>.
-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float y = 0, x1 = 0, x2 = 0;
    float num = 0, den = 0;
    float diff = 0;

    printf("Insira o valor Y: ");
    scanf("%f", &y);

    x1 = y / 2;

    num = pow(x1, 2) - y;

    den = 2 * x1;

    x2 = x1 - (num / den);
    diff = fabs(x2 - x1);

    int i = diff;
    for (i; i >= 0.1;)
    {

        num = pow(x1, 2) - y;

        den = 2 * x1;

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