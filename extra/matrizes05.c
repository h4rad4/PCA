/*
-------------------------------------------------------
Dada uma matriz 5x5, elabore um algoritmo que imprima:

A diagonal principal
A diagonal secundária
A soma da linha 4
A soma da coluna 2
Tudo, exceto a diagonal principal
-------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int **mat = (int **)malloc(5 * sizeof(int *));

    for (int i = 0; i < 5; i++)
    {
        *(mat + i) = (int *)malloc(5 * sizeof(int));

        for (int j = 0; j < 5; j++)
        {
            printf("Insira o elemento [%d][%d]. ", i, j);
            scanf("%d", (*(mat + i) + j));
        }
        printf("\n");
    }
    d1(mat);
    d2(mat);
    somas(mat);
    tudo(mat);

    return 0;
}

void d1(int ***mat)
{
    printf("D. principal: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                printf("%d ", *(*(mat + i) + j));
            }
        }
    }
    printf("\n");
}

void d2(int ***mat)
{
    printf("D. secundaria: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                printf("%d ", *(*(mat + i) + 5 - i - 1));
            }
        }
    }
    printf("\n");
}

void somas(int ***mat)
{
    printf("Soma da linha 4: ");
    int soma4 = 0;

    for (int j = 0; j < 5; j++)
    {
        soma4 += *(*(mat + 4) + j);
    }
    printf("%d\n", soma4);

    printf("Soma da coluna 2: ");
    int soma2 = 0;

    for (int j = 0; j < 5; j++)
    {
        soma2 += *(*(mat + j) + 2);
    }
    printf("%d", soma2);
}

void tudo(int ***mat)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {
                printf("%d ", *(*(mat + i) + j));
            }
        }
        printf("\n");
    }
}