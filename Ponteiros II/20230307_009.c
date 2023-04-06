/*
-------------------------------------------------------------------------------------------------------------------------
Escreva uma função que recebe uma string de caracteres e uma letra e devolve um vetor de inteiros contendo as posições
(índices no vetor da string) onde a letra foi encontrada e um inteiro contendo o tamanho do vetor criado
(total de letras iguais encontradas).

Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o tamanho do vetor.
-------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[100];
    char lt;

    char *letra;

    printf("Insira a string. ");
    fgets(string, sizeof(string), stdin);
    setbuf(stdin, NULL);

    printf("Insira o caractere. ");
    scanf("%c", &lt);
    letra = &lt;

    function(string, letra);

    return 0;
}

int function(char string[10], char *letra)
{
    int positions[100], sizePositions = 0, *pointer;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == *letra)
        {
            positions[i] = i;
            sizePositions++;
        }
    }

    pointer = &sizePositions;

    printf("Total de letras iguais encontradas: %i", *pointer);
}
