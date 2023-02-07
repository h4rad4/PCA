/*
-------------------------------------------------------------------------------------------------------------------
Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres); ´
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2.
    Os caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser
    criada a substring e qual é o tamanho da substring.
-------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

char S1[20], S2[20];

int main(int argc, char const *argv[])
{
    input();
    // size();
    // comparator();
    // concat();
    // reverse();
    substr();

    return 0;
}

void input() // (a) Ler uma string S1 (tamanho máximo 20 caracteres);
{
    printf("Type a string. ");
    scanf("%s", &S1);
}

void size() // (b) Imprimir o tamanho da string S1;
{
    printf("\nS1's Size: %i", strlen(S1));
}

void comparator() // (c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
{
    printf("Type a new string to be compared. ");
    scanf("%s", &S2);

    if (strcmp(S1, S2) != 0)
        printf("\nS1 and S2 are different. ");
    else if (strcmp(S1, S2) == 0)
        printf("\nS1 and S2 are equal. ");
    if (strcmp(S1, S2) != 0 && strcmp(S1, S2) < 0)
        printf("\nS1 precedes S2. ");
    if (strcmp(S1, S2) != 0 && strcmp(S1, S2) > 0)
        printf("\nS1 proceeds S2. ");
}

void concat() // d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
{
    printf("Type a new string to be concatenated. ");
    scanf("%s", &S2);

    printf("%s", strcat(S1, S2)); // Junta S1 e S2, e atribui a nova string a S1. (!!!)
}

void reverse() //(e) Imprimir a string S1 de forma reversa;
{
    printf("Reverse: ");

    for (int i = strlen(S1) - 1; i >= 0; i--)
    {
        printf("%c", S1[i]);
    }
}

void substr() // (h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
{
    int c = 0;

    printf("Type a new string. ");
    scanf("%s", &S2);

    for (int i = 0; i < strlen(S1)-1; i++)
    {
        if(S1[i] == S2[i] && S2[i+1] != S1[i+1])
        continue;

        S2[i + 1] = S2[i];

        if (S1[i+1] == S2[i+1])
        {
            c++;
        }

        printf("c = %i\t", c);
    }

    if (c == strlen(S2))
        printf("S2 is a substring of [%s]", S2, S1);

    else
        printf("S2 is not a substring of [%s]", S1);
}
