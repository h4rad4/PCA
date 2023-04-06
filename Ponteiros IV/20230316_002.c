/*
---------------------------------------------------------------------------------------------------------------------------------------
Construa um programa que aloque em tempo de execução (dinamicamente) uma matriz de ordem m x n (linha por coluna) usando só aritmética
de ponteiros.

Usar o programa para definir a seguinte matriz:
1 2 3
4 5 6

a) Imprima os valores da matriz usando aritmética de ponteiros.
b) Imprima os valores da matriz usando indexes.
c) Liberar a área de memória alocada pela matriz.
---------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int **mat;
    int i, j;

    // Inserindo as dimensões da matriz:
    printf("Insira a quantidade de linhas. ");
    scanf("%i", &i);

    printf("Insira a quantidade de colunas. ");
    scanf("%i", &j);

    // Alocando as linhas:
    mat = (int **)malloc(i * sizeof(int *));

    // Colocando os elementos da matriz:
    Alocadora(i,j,mat);

    // Imprimindo os valores da matriz:
    Impressora(i, j, mat);

    // Liberando o espaço alocado:
    Limpeza(mat, i);

    if (Limpeza(mat, i) == NULL)
        printf("\n\nMemoria alocada liberada!");

    return 0;
}

void Impressora(int i, int j, int **mat)
{
    printf("\nImprimindo com aritmetica de ponteiros:\n");

    for (int m = 0; m < i; m++)
    {
        printf("\n");

        for (int n = 0; n < j; n++)
        {
            printf("%d ", *(*(mat + m) + n));
        }
    }

    printf("\n\nImprimindo com indexes:\n");

    for (int m = 0; m < i; m++)
    {
        printf("\n");

        for (int n = 0; n < j; n++)
        {
            printf("%d ", mat[m][n]);
        }
    }
}

int Limpeza(int **mat, int i)
{
    for (int a = 0; a < i; a++)
        free(mat);

    return NULL;
}

void Alocadora(int i, int j, int **mat)
{
    // Alocando os elementos das linhas (colunas):
    for (int m = 0; m < i; m++)
    {
        *(mat + m) = (int *)malloc(j * sizeof(int));
    }

    // Inserindo os valores da matriz:

    for (int m = 0; m < i; m++)
    {
        for (int n = 0; n < j; n++)
        {
            printf("Insira o elemento [%d] [%d]. ", m, n);
            scanf("%d", (*(mat + m) + n));
        }
    }
}