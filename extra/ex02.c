/*
----------------------------------------------------------------------------------------------
Faça uma função que receba uma lista de valores e retorne o maior valor, o menor valor e
a média entre todos os valores. (usando índices e ponteiros)
----------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const argv[])
{
    int quantidade;

    printf("Insira a quantidade de valores. ");
    scanf("%d", &quantidade);

    int *vetor = (int *)malloc(quantidade * sizeof(int));

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nInsira um valor. ");
        scanf("%d", &*(vetor + i));
    }

    ponteiros(vetor, quantidade);
    indexes(vetor, quantidade);
}

void ponteiros(int *vetor, int quantidade)
{
    int maior = *vetor;
    int menor = *vetor;
    int media = 0;
    int soma = 0;

    for (int i = 0; i < quantidade; i++)
    {
        soma += *(vetor + i);

        if (*(vetor + i) > maior)
        {
            maior = *(vetor + i);
        }

        if (*(vetor + i) < menor)
        {
            menor = *(vetor + i);
        }
    }

    media = soma / quantidade;

    printf("Maior: %d Menor: %d Media: %d\n", maior, menor, media);
}

void indexes(int *vetor, int quantidade)
{
    int maior = *vetor;
    int menor = *vetor;
    int media = 0;
    int soma = 0;

    for (int i = 0; i < quantidade; i++)
    {
        soma += *(vetor + i);

        if (*(vetor + i) > maior)
        {
            maior = *(vetor + i);
        }

        if (*(vetor + i) < menor)
        {
            menor = *(vetor + i);
        }
    }

    media = soma / quantidade;

    printf("Maior: %d Menor: %d Media: %d\n", maior, menor, media);
}