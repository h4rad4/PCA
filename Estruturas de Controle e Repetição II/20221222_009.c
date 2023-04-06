/*
----------------------------------------------------------------------
Calcular os valore de x e y onde a seguinte expressão

xy - x² + y tem valor máximo, a partir dos números naturais n e m tais que 

x <= m e y <= n.
----------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int x = 0, y = 0;
    int valor, valor_max = 0;
    int x_max, y_max;
    int m, n; // intervalo

    printf("Insira o valor 'm': ");
    scanf("%i", &m);

    printf("Insira o valor 'n': ");
    scanf("%i", &n);

    for (x = 0; x <= m; x++) // enquanto x estiver no intervalo
    {
        for (y = 0; y <= n; y++) // enquanto y estiver no intervalo
        {
            valor = x * y - x * x + y; // efetue o cálculo

            if (valor > valor_max) 
            {
                valor_max = valor;
                x_max = x;
                y_max = y;
            }
        }
    }

printf("\nX maximo = %i \n", x_max);
printf("Y maximo = %i \n", y_max);
printf("Valor maximo = %i \n", valor_max);

    return 0;
}