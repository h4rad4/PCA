/*
Questão 2 (5,0 pontos).

Faça um programa em C com três funções:

- Função para solicitar do usuário um número real positivo no range [0,1].

- Função arctan que recebe o número real x [0,1] e devolve uma aproximação do arco
tangente de x (em radianos) através da série.

- Função que imprima na tela uma mensagem com o número real e o arco tangente do
número em radianos.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float n = entrada();
    float arct = arctan(n);

    printf("Arctan of [%.2f] is approximately [%f]", n, arct);
}

float entrada()
{
    float n;

    printf("Input a positive value between 0 and 1: ");
    scanf("%f", &n);

    while (n <= 0 || n >= 1)
    {
        printf("Invalid. Input a positive value between 0 and 1: ");
        scanf("%f", &n);
    }

    return n;
}

float arctan(float x)
{
    int k = 1;
    float element = x;
    float result = 0;

    while (fabs(element) > 0.0001)
    {
        k += 2;
        result += element;
        element = -element*pow(x,2)*(k-2)/k;
    }

    return result;
}