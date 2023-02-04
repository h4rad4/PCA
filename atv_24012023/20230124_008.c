/*
------------------------------------------------------------------------------------------------------
Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.
a) Crie uma função para determinar o produto escalar de dois vetores com n elementos.

O produto escalar de dois vetores A=(a1, a2,..,an) e B=(b1, b2, ..., bn) é ∑aibi  onde 1 ≤ i ≤ n
------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int n = 0;
int x[999] = {};
int y[999] = {};

void operator()
{
    int sum;
    
    for (int k = 0; k < n; k++)
    {
        //printf("x[%i] = %i \t", k, x[k]);
        //printf("y[%i] = %i", k, y[k]);
        sum += x[k] * y[k];
        printf("R = %i \t", sum);
    }
}

int main(int argc, char const *argv[])
{
    printf("Input 'n' interval. ");
    scanf("%i", &n); 

    for (int i = 0; i < n; i++)
    {
        printf("Input the value [%i] for Vx. ", i);
        scanf("%i", &x[i]);

        //printf("x = %i\n", x[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf("");

        printf("Input the value [%i] for Vy. ", j);
        scanf("%i", &y[j]);

        //printf("y = %i", y[j]);
    }

    operator();

    return 0;
}
