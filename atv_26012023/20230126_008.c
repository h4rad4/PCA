/*
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Faça uma função para multiplicar duas matrizes. A função recebe como parâmetro as três matrizes e as dimensões das duas primeiras matrizes e verificar se as matrizes podem ser
multiplicadas e apresentar uma mensagem de erro, caso não seja possível. O resultado da multiplicação das duas primeiras matrizes deve ser armazenado na terceira matriz.
A função deve retornar falso se não for possível multiplicar as matrizes, e verdadeiro caso contrário.

A função não deve ler as matrizes, imprimir o resultado, nem a mensagem de erro. Isto deve ser feito na função principal.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int m1[10][10], m2[10][10], resultado[10][10];
int linhas1, colunas1, linhas2, colunas2;

int main() {

    printf("numero de linhas da MATRIZ 1: ");
    scanf("%d", &linhas1);
    printf("numero de colunas da MATRIZ 1: ");
    scanf("%d", &colunas1);

    printf("numero de linhas da MATRIZ 2: ");
    scanf("%d", &linhas2);
    printf("Informe o numero de colunas da MATRIZ 2: ");
    scanf("%d", &colunas2);

    printf("Informe os elementos da MATRIZ 1:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Informe os elementos da MATRIZ 2:\n");
    for (int i = 0; i < linhas2; i++) {
        for (int j = 0; j < colunas2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    multiplicar_matrizes();

    printf("Resultado = \n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("%d ", resultado[i][j]);
        }
    }

    return 0;
}

void multiplicar_matrizes() {
    if (colunas1 != linhas2) {
        printf("Invalido. \n");
        return;
    }

    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}