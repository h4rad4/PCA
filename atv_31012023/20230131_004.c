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
int option = 10;

int main(int argc, char const *argv[])
{
    input(); // a

    printf(" \nSelect an option : \n 1- Print string's size \n 2- Comparate string \n 3- Concatenate string \n 4- Invert string \n 5- Count character \n 6- Replace character \n 7- Check substring \n 8- Find substring \n");
    scanf("%i", &option);

    do
    {
        if (option == 10)
        {
            printf(" \nSelect an option : \n 1- Print string's size \n 2- Comparate string \n 3- Concatenate string \n 4- Invert string \n 5- Count character \n 6- Replace character \n 7- Check substring \n 8- Find substring \n");
            scanf("%i", &option);
        }

        if (option == 1)
            size();
        else if (option == 2)
            comparator();
        else if (option == 3)
            concat();
        else if (option == 4)
            reverse();
        else if (option == 5)
            count();
        else if (option == 6)
            substitute();
        else if (option == 7)
            substr();
        else if (option == 8)
            substr2();
    } while (option != 0);

    return 0;
}

void input() // (a) Ler uma string S1 (tamanho máximo 20 caracteres);
{
    printf("Type a string. \n");
    scanf("%s", &S1);
}

void size() // (b) Imprimir o tamanho da string S1;
{
    printf("\n> S1's Size: %i", strlen(S1));

    printf("\n \n Type [10] to return to menu. \n Type [0] to exit. \n");
    scanf("%i", &option);
}

void comparator() // (c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
{
    printf("Type a new string to be compared. ");
    scanf("%s", &S2);

    if (strcmp(S1, S2) != 0)
        printf("\n > S1 and S2 are different. ");
    else if (strcmp(S1, S2) == 0)
        printf("\n> S1 and S2 are equal. ");
    if (strcmp(S1, S2) != 0 && strcmp(S1, S2) < 0)
        printf("\n> S1 precedes S2. ");
    if (strcmp(S1, S2) != 0 && strcmp(S1, S2) > 0)
        printf("\n> S1 proceeds S2. ");

    printf("\n \n Type [10] to return to menu. \n Type [0] to exit. \n");
    scanf("%i", &option);
}

void concat() // d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
{
    printf("Type a new string to be concatenated. ");
    scanf("%s", &S2);

    printf("> %s", strcat(S1, S2)); // Junta S1 e S2, e atribui a nova string a S1. (!!!)

    printf("\n \n Type [10] to return to menu. \n Type [0] to exit. \n");
    scanf("%i", &option);
}

void reverse() //(e) Imprimir a string S1 de forma reversa;
{
    printf("> Reverse: ");

    for (int i = strlen(S1) - 1; i >= 0; i--)
    {
        printf("%c", S1[i]);
    }

    printf("\n \n Type [10] to return to menu. \n Type [0] to exit. \n");
    scanf("%i", &option);
}

void count() // (f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
{
    char ch;
    int count = 0;

    printf("Type a character. ");
    scanf(" %c", &ch);

    for (int i = 0; i < strlen(S1); i++)
    {
        if (S1[i] == ch)
            count++;
    }

    printf("> %c occurs %i times", ch, count);

    printf("\n \n Type [10] to return to menu. \n Type [0] to exit. \n");
    scanf("%i", &option);
}

void substitute() // (g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2.
{
    char c1, c2;

    printf("Type c1. ");
    scanf(" %c", &c1);

    printf("Type c2. ");
    scanf(" %c", &c2);

    for (int i = 0; i < strlen(S1); i++)
    {
        if (S1[i] == c1)
        {
            S1[i] = c2;
            break;
        }
    }
    printf("> New string = %s", S1);

    printf("\n \n Type [10] to return to menu. \n Type [0] to exit. \n");
    scanf("%i", &option);
}

void substr() // (h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
{
    printf("Type a new string. ");
    scanf("%s", &S2);

    if (strstr(S1, S2) != 0)
        printf("> Is a substring");
    else
        printf("> Not a substring");

    printf("\n \n Type [10] to return to menu. \n Type [0] to exit. \n");
    scanf("%i", &option);
}

void substr2() // (i) Retornar uma substring da string S1.
{
    int pos, tam;

    printf("Type a position. ");
    scanf("%i", &pos);

    printf("Substring's length: ");
    scanf("%i", &tam);

    for (int i = pos; i < pos + tam; i++)
        printf("> Substr = %c", S1[i]);

    printf("\n \n Type [10] to return to menu. \n Type [0] to exit. \n");
    scanf("%i", &option);
