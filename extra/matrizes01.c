/*
----------------------------------------------------------------------------------
Construa um algoritmo que efetue e apresente o resultado da soma
entre duas matrizes 3 x 5. Inicialize a matriz com valores quaisquer e imprima o
resultado na tela.
----------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Alocando a matriz 1.
    int **mat1 = (int **)malloc(3 * sizeof(int *));

    for (int i = 0; i < 5; i++)
    {
        *(mat1 + i) = (int *)malloc(5 * sizeof(int));
    }

    // Alocando a matriz 2.

    int **mat2 = (int **)malloc(3 * sizeof(int *));

    for (int i = 0; i < 5; i++)
    {
        *(mat2 + i) = (int *)malloc(5 * sizeof(int));
    }

    // Alocando a matriz soma.

    int **soma = (int **)malloc(3 * sizeof(int *));

    for (int i = 0; i < 5; i++)
    {
        *(soma + i) = (int *)malloc(5 * sizeof(int));
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Insira o elemento [%d][%d] de M1. ", i, j);
            scanf("%d", *(mat1 + i) + j);

            printf("Insira o elemento [%d][%d] de M2. ", i, j);
            scanf("%d", *(mat2 + i) + j);

            *(*(soma + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
    printf("Matriz soma: ");

    for (int i = 0; i < 3; i++)
    {
        printf("\n;");
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *(*(soma + i) + j));
        }
    }

    return 0;
}
