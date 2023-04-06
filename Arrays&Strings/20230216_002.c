/*
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Um conjunto pode ser representado por um vetor da seguinte forma: V[0] é o tamanho do conjunto; V[1], V[2], etc. são os elementos do conjunto (sem repetições).

(a) Faça uma função chamada intersecção que dados dois conjuntos de números inteiros A e B, constrói um terceiro conjunto C que é a intersecção de A e B.
Lembre-se de que em C[0] a sua função deve colocar o tamanho da intersecção.

    Exemplo: os conjuntos A={1, 2, 4, 9} e B={2, 4, 7, 8, 9}

        A[0] = 4, A[1]=1, A[2]=2,....   O mesmo para B

        A intersecção são os números que estão em A e em B, no exemplo {2, 4, 9}


(b) Faça um programa que lê um inteiro n > 1 e uma sequência de n conjuntos de números inteiros (cada um com no máximo 100 elementos) e constrói e imprime um vetor INTER
que representa a intersecção dos n conjuntos.


Por exemplo, se n = 3 e os conjuntos são {1, 2, 4, 9}, {2, 4, 7, 8, 9} e {5, 4, 9}, a entrada será:

    3    O valor de n

    4    V[0] = tamanho do primeiro conjunto
    1 2 4 9    V[1]  V[2]  V[3]  V[4]

    5    V[0] = tamanho do segundo conjunto
    2 4 7 8 9    V[1]  V[2]  V[3]  V[4]  V[5]

    3    V[0] = tamanho do terceiro conjunto
    5 4 9    V[1]  V[2]  V[3]

E o vetor INTER construído será

INTER[0] = 2         tamanho do conjunto
INTER[1] = 4    INTER[2] = 9    conjunto intersecção

NOTE que não é preciso ler todos os conjuntos de uma só vez. Você pode ler os dois primeiros conjuntos e calcular a primeira intersecção.
Depois, leia o próximo conjunto e calcule uma nova intesecção entre esse conjunto lido e o conjunto da intersecção anterior, e assim por diante.

Use obrigatoriamente a função do item a).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int n, n1;
int c1[100], c2[100], c3[100];

int main(int argc, char const *argv[])
{
    char option;

    printf("Qual programa deseja executar? ('A' ou 'B') ");
    scanf("%c", &option);

    switch (option)
    {
    case 'A':

        inputs();
        intersec();
        break;

    case 'B':
        inputs2();
        break;

    default:
        printf("Nenhum programa foi selecionado. ");
        break;
    }

    return 0;
}

void inputs()
{
    printf("Tamanho do conjunto 1: ");
    scanf("%i", &n);
    c1[0] = n;

    for (int i = 1; i <= n; i++)
    {
        printf("Insira o elemento [%i] de C1. ", i);
        scanf("%i", &c1[i]);
    }

    printf("Tamanho do conjunto 2: ");
    scanf("%i", &n1);
    c2[0] = n;

    for (int i = 1; i <= n1; i++)
    {
        printf("Insira o elemento [%i] de C2. ", i);
        scanf("%i", &c2[i]);
    }
}

void intersec()
{
    printf("\nIntersec = ");

    for (int i = 1; i <= n; i++)
    {
        int temp = c1[i];

        for (int j = 0; j <= n1; j++)
        {
            if (c2[j] == temp)
            {
                c3[i] = temp;
                printf("%i ", c3[i]);
            }
        }
    }
}

void inputs2()
{
    int qt;

    printf("Qual a quantidade de conjuntos? ");
    scanf("%i", &qt);

    printf("Qual o tamanho do conjunto C1? ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Insira o elemento %i de C1. ", i);
        scanf("%i", &c1[i]);
    }

    /*for (int p = 0; p <= n; p++)
        printf("%i", c1[p]);*/

    for (int j = 2; j <= qt; j++)
    {
        printf("\nQual o tamanho de C%i? ", j);
        scanf("%i", &n1);

        for (int k = 1; k <= n1; k++)
        {
            printf("Insira o elemento %i de C%i. ", k, j);
            scanf("%i", &c2[k]);
        }

        /*printf("\nvetor = ");
        for (int p = 0; p <= n1; p++)
            printf("%i ", c2[p]);*/

       intersec();
    }
}
