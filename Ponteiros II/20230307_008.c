/*
----------------------------------------------------------------------------------
Escreva uma função chamada troca que troca os valores dos parâmetros recebidos.
Sua assinatura deve ser: void troca(float *a, float *b);
----------------------------------------------------------------------------------
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;
    float *p1, *p2;

    printf("Insira o valor de A. ");
    scanf("%f", &a);

    printf("Insira o valor de B. ");
    scanf("%f", &b);

    printf("Antes: ");
    printf("A = %.2f / B = %.2f", a, b);

    troca(p1, p2);

    return 0;
}

void troca(float *p1, float *p2)
{
    int a, b;

    printf("\n");

    printf("Insira o novo valor para A. ");
    scanf("%f", &a);
    p1 = &a;

    printf("Insira o novo valor para B. ");
    scanf("%f", &b);
    p2 = &b;

    printf("Depois: ");
    printf("A = %.2f \n B = %.2f", *p1, *p2);
}
