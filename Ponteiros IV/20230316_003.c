/*
-------------------------------------------------------------------------------------------------------------
Desenvolva um programa que calcule a soma de duas matrizes MxN de números reais (double).
A implementação deste programa deve considerar as dimensões fornecidas pelo usuário.

(Dica: represente a matriz através de variáveis do tipo double **, usando alocação dinâmica de memória)
-------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;
    double **mat1, **mat2, **result;

    // Inserir as dimensões das matrizes
    printf("Digite o número de linhas e colunas das matrizes (m e n): ");
    scanf("%d %d", &m, &n);

    // alocando m1
    mat1 = (double **)malloc(m * sizeof(double *));
    for (i = 0; i < m; i++)
    {
        mat1[i] = (double *)malloc(n * sizeof(double));
    }

    // alocando m2
    mat2 = (double **)malloc(m * sizeof(double *));
    for (i = 0; i < m; i++)
    {
        mat2[i] = (double *)malloc(n * sizeof(double));
    }

    // alocando mr
    result = (double **)malloc(m * sizeof(double *));
    for (i = 0; i < m; i++)
    {
        result[i] = (double *)malloc(n * sizeof(double));
    }

    // Inserir os valores da primeira matriz
    printf("Digite os valores da primeira matriz:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &mat1[i][j]);
        }
    }

    // Inserir os valores da segunda matriz
    printf("Digite os valores da segunda matriz:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &mat2[i][j]);
        }
    }

    // Realiza a soma das matrizes
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // IMprime a matriz resultante
    printf("Matriz resultante:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
