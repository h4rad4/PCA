/*
--------------------------------------------------------------------------------------------------------------------
Faça funções que:

- Receba uma palavra e a imprima de trás-para-frente.
- Receba do usuário uma string e imprime a string sem vogais.
- Transforma todos os caracteres de uma string em maiúsculos.
- Função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.
- Função que recebe uma string e um caractere, e apague todas as ocorrências desse caractere na string.
--------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[100];

    printf("Type a word. ");
    scanf("%s", word);
    printf("STRLEN = %i \n", strlen(word));

    //reverse(word);
    //no_vowel(word);
    //repeat(word);
    //del(word);

    return 0;
}

int reverse(char string[]) // Receba uma palavra e a imprima de trás-para-frente.
{
    printf("\n1. Reverse = ");

    for (int i = strlen(string); i >= 0; i--)
    {
        printf("%c", string[i]);
    }
}

int no_vowel(char string[]) // Receba do usuário uma string e imprime a string sem vogais.
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'A' || string[i] == 'I' || string[i] == 'U' || string[i] == 'E' || string[i] == 'O')
        {
            string[i] = ' ';
        }

        if (string[i] == 'a' || string[i] == 'i' || string[i] == 'u' || string[i] == 'e' || string[i] == 'o')
        {
            string[i] = ' ';
        }
    }
    printf("%s", string);
}

int repeat(char string[]) // Função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.
{
    char ch[1];
    int count = 0;

    printf("Type a character. ");
    scanf("%s", ch);

    for (int i = 0; i < strlen(string); i++)
    {
        if (ch[0] == string[i])
        {
            count++;
        }
    }

    printf("%s appears %i times in '%s'", ch, count, string);
}

int del(char string[]) // Função que recebe uma string e um caractere, e apague todas as ocorrências desse caractere na string.
{
    char ch[1];

    printf("Type a character. ");
    scanf("%s", ch);

    printf("'%s' without '%c' is:", string, ch);

    for (int i = 0; i < strlen(string); i++)
    {
        if (ch[0] == string[i])
        {
            string[i] = ' ';
        }
    }

    printf("%s", string);
}