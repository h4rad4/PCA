/*
----------------------------------------------------------------------------------------------------------------------------
Faça um programa para criar a formação de uma equipe de futebol para um jogo. Os requisitos são:
- A equipe tem 23 jogadores.
- Cada jogador tem uma função (3 Goleiro, 7 Defensa, 8 Médio Campo, 5 Atacante) .
- Cada jogador tem uma avaliação entre 0 e 10

a) Crie usando array as estruturas necessárias para representar essa informação num programa em C.

b) Inicializar as estruturas com os dados de uma equipe.

c) Crie e imprima uma formação  (1 Goleiro, 4 Defensa, 4 Médio Campo, 2 Atacante) para o jogo selecionado os jogadores
em cada função com melhor avaliação.
----------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char jogadores[23][30] = {"HUGO", "MATHEUS", "SANTOS", "RODRIGO", "LEO", "DAVID", "CLEITON",
                          "FABRICIO", "PABLO", "MATHEUZINHO", "EVERTON", "ARRASCAETA",
                          "VICTOR", "GABI", "BRUNO", "PEDRO", "MARINHO", "HEBERT",
                          "VARELA", "FILIPE", "AYRTON", "ARTURO", "ERICK"};

char funcao[23][10] = {"G", "G", "G", "DEF", "DEF", "DEF", "DEF", "DEF", "DEF", "DEF",
                       "MEIO", "MEIO", "MEIO", "MEIO", "MEIO", "MEIO", "MEIO", "MEIO",
                       "ATK", "ATK", "ATK", "ATK", "ATK"};

int nota[23] = {10, 9, 8, 10, 9, 8, 10, 9, 8, 10, 9, 8, 10, 9, 8, 8, 9, 10, 10, 9, 8, 7, 6};

int maior, menor, index;
char strtemp[30];

int main(int argc, char const *argv[])
{
    printf("\n\n[FORMACAO] \n\n");

    printf("GOLEIRO: ");
    goleiro();

    printf("\n");

    printf("DEFESA: ");
    defesa();

    printf("\n");

    printf("MEIO CAMPO: ");
    meiocampo();

    printf("\n");

    printf("ATAQUE: ");
    atacante();

    return 0;
}

void goleiro()
{
    for (int i = 0; i < 2; i++)
    {
        maior = nota[0];
        index = 0;

        if (nota[i] > maior)
        {
            maior = nota[i];
            index = i;
        }
    }
    printf("%s", jogadores[index]);
}

void defesa()
{
    // Ordenando as notas e os nomes dos jogadores
    for (int i = 3; i <= 9; i++)
    {
        for (int j = i; j <= 9; j++)
        {
            if (nota[i] < nota[j])
            {
                int temp = nota[i];
                nota[i] = nota[j];
                nota[j] = temp;

                strcpy(strtemp, jogadores[i]);
                strcpy(jogadores[i], jogadores[j]);
                strcpy(jogadores[j], strtemp);
            }
        }
        // printf("%i- ", nota[i]); // Printar notas ordenadas
    }

    // Printando os quatro primeiros do intervalo de 3 a 6 (posição dos jogadores de defesa com maiores notas)
    for (int print = 3; print < 7; print++)
    {
        printf("%s ", jogadores[print]);
    }
}

void meiocampo()
{
    for (int i = 10; i < 18; i++)
    {
        for (int j = i; j < 18; j++)
        {
            if (nota[i] < nota[j])
            {
                int temp = nota[i];
                nota[i] = nota[j];
                nota[j] = temp;

                strcpy(strtemp, jogadores[i]);
                strcpy(jogadores[i], jogadores[j]);
                strcpy(jogadores[j], strtemp);
            }
        }
    }

    for (int print = 10; print < 14; print++)
    {
        printf("%s ", jogadores[print]);
    }
}

void atacante()
{
    for (int i = 18; i < 23; i++)
    {
        for (int j = i; j < 23; j++)
        {
            if (nota[i] < nota[j])
            {
                int temp = nota[i];
                nota[i] = nota[j];
                nota[j] = temp;

                strcpy(strtemp, jogadores[i]);
                strcpy(jogadores[i], jogadores[j]);
                strcpy(jogadores[j], strtemp);
            }
        }
    }

    for (int print = 18; print < 20; print++)
    {
        printf("%s ", jogadores[print]);
    }
}
