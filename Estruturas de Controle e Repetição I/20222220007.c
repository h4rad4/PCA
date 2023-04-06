/*
------------------------------------------------------------------------------------------------------------------------------------------------------
Em uma disciplina com três exercícios, um professor deseja saber qual a maior e a menor nota de cada exercício e qual a maior e a menor média final. 
Faça um programa para auxiliá-lo nesta tarefa.
------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>


int main(int argc, char const *argv[])
{
    float gr = 0, soma = 0, maior = 0, menor= 0;
    int c = 1;

    while (c < 4) {
        printf("Digite sua nota %i: ", c);
        scanf("%f", &gr);
        c++;
        soma += gr;

        if (c == 2) {
            maior = menor = gr;
        } else if (gr > maior) {
            maior = gr;
        } else if (gr < menor) {
            menor = gr;
        }

    }
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Media Final: %.2f", soma/3);
    return 0;
}