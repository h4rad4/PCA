/*
---------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que calcula a média e o desvio padrão das notas de uma turma;
- O programa deve solicitar no início a quantidade de alunos na turma e alocar dinamicamente um vetor de float onde as notas dos alunos
digitadas devem ser armazenadas;

- Você deve criar uma função “mediaDesvio” para calcular a média e o desvio padrão e retornar estes valores através de parâmetros
passados por referência (ponteiros). A função recebe como parâmetro o ponteiro para o vetor, a quantidade de elementos no vetor, e dois
ponteiros: media e desvio onde deve guardar os resultados;

Referencia:
https://www.todamateria.com.br/desvio-padrao/#:~:text=O%20desvio%20padr%C3%A3o%20%C3%A9%20uma,mais%20homog%C3%AAneo%20s%C3%A3o%20os%20dados
---------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int qt;
    int *desvio, *media;

    printf("Insira a quantidade de alunos. ");
    scanf("%i", &qt);

    int *v = (int *)malloc(qt * sizeof(int));

    for (int i = 0; i < qt; i++)
    {
        printf("Insira a nota do aluno %i. ", i);
        scanf("%i", &*(v + i));
        // printf("%i ", *(v+i));
    }

    mediaDesvio(qt, v, &desvio, &media);

    return 0;
}

int mediaDesvio(int qt, int *v, int *desvio, int *media)
{
    int sum = 0, num;
    *desvio = 0;

    for (int i = 0; i < qt; i++)
    {
        sum += *(v + i);
    }
    *media = sum / qt;

    printf("Media = %i \n", *media);

    for (int i = 0; i < qt; i++)
    {
        num = (*v+i) - *media;
        *desvio += (num*num) /qt;
    }

    printf("Desvio = %i", *desvio);
}
