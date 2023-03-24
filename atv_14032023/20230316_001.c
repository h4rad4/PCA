/*
------------------------------------------------------------------------------------------------------------------------------------
Crie uma função que aloca e lê um vetor de n inteiros. Crie outra função que recebe o vetor e retorna o maior e o menor valor.
O programa principal deve executar as duas funções, imprimir os valores retornados pela 2ª função e liberar a memória alocada pela
1ª função.
------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *v;
    int qt;

    printf("Insira a quantidade de elementos do vetor. ");
    scanf("%i", &qt);

    // Alocando e lendo o vetor
    inputs(&v, qt);

    // Liberando a memoria alocada
    free(v);

    return 0;
}

int inputs(int *v, int qt)
{
    v = (int *)malloc(qt * sizeof(int));

    for (int i = 0; i < qt; i++)
    {
        printf("Insira o elemento %i do vetor. ", i);
        scanf("%d", &*(v + i));
        // printf("%d ", *(v+i));
    }

    comparate(v, qt);
}

int comparate(int **v, int qt)
{
    int maior = *v;
    int menor = *v;

    for (int i = 0; i < qt; i++)
    {
        if (*(v + i) > maior)
            maior = *(v + i);

        if (*(v + i) < menor)
            menor = *(v + i);
    }

    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d", menor);
}