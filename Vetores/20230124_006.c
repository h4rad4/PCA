/*
---------------------------------------------------------------------------------------------------------------------------------------------------
Criar uma função para ordenar um vetor em ordem ascendente utilizando o algoritmo Selection-Sort. Este algoritmo funciona da seguinte forma:

- Percorrer o array comparando os elementos para determinar qual é o menor.
- Intercambiar o elemento com menor valor com o elemento que está na primeira posição.
- Procurar o segundo menor valor e intercambiar com o elemento que está na segunda posição.
- Continuar o algoritmo até que todos os elementos estejam ordenados.
---------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int vector[];
char letra[30];

int function(int vector[], int t)
{
    int temp;

    for (int i = 0; i <= t; i++)
    {
        for (int l = i + 1; l < t; l++)
        {
            if (vector[i] > vector[l])
            {
                temp = vector[i];
                vector[i] = vector[l];
                vector[l] = temp;
            }
        }
    }
    return vector;
}

int main(int argc, char const *argv[])
{
    int t;

    printf("ARRAY'S DIMENSION: ");
    scanf("%i", &t);

    for (int i = 0; i < t; i++)
    {
        printf("Input a value [%i]. ", i);
        scanf("%i", &vector[i]);
    }

    printf("Array = ");
    for (int j = 0; j < t; j++)
    {
        printf("[%i] ", vector[j]);
    }

    function(vector, t);

    
    printf("\nOrdenated: ");
    
    for (int j = 0; j < t; j++)
        printf("[%i] ", vector[j]);

    return 0;
}