/*
----------------------------------------------------------------------------------------------------------------------------------------------
Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array.
Caso o tamanho do primeiro e segundo array seja diferente então a função retornará ZERO (0).
Caso a função seja concluída com sucesso a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.
----------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int s1, s2;

    printf("Insira o tamanho dos arrays 1 e 2: \n");
    scanf("%i %i", &s1, &s2);

    inputs(s1, s2);

    return 0;
}

int inputs(int s1, int s2)
{
    int ar1[s1], ar2[s2];

    for (int i = 0; i < s1; i++)
    {
        printf("Insira o valor [%i] do array 1. ", i);
        scanf("%i", &ar1[i]);
    }

    for (int i = 0; i < s2; i++)
    {
        printf("Insira o valor [%i] do array 2. ", i);
        scanf("%i", &ar2[i]);
    }

    int *t1 = &s1;
    int *t2 = &s2;

    // printf(" %i %i ", *t1, *t2);
    sum(ar1, ar2, t1, t2);
}

int sum(int ar1[], int ar2[], int *t1, int *t2)
{
    if (*t1 == *t2)
    {
        int soma[*t1];

        for (int i = 0; i < *t1; i++)
        {
            soma[i] = ar1[i] + ar2[i];
        }

        printf("Soma = ");

        for (int j = 0; j < *t1; j++)
            printf("%i ", soma[j]);

        printf("\n\n Programa executado com sucesso. ");
        
    return 1;
    }
    else
    {
        printf("\n\n Programa nao executado. ");
        return 0;
    }
}