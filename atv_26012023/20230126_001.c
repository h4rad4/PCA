/*

Construa um algoritmo que efetue e apresente o resultado da soma entre duas matrizes 3 x 5. 
Inicialize a matriz com valores quaisquer e imprima o resultado na tela.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m1[3][5] = {{1,1,1,1,1}, {2,2,2,2,2}, {3,3,3,3,3}};
    int m2[3][5] = {{4,4,4,4,4}, {4,4,4,4,4}, {6,6,6,6,6}};
    int soma[3][5];
    
    for (int i=0; i < 3; i++)
    {
        for(int j=0; j < 5; j++)
        {
            soma[i][j] = m1[i][j] + m2[i][j];
            printf("[%i]", soma[i][j]);
        }
    }

    return 0;
}