/*
-----------------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. 
Lembrando que um palíndromo e uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. 

Exemplo: ovo, arara, Anotaram a data da maratona.
-----------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, length;
    int palindrome = 1;

    printf("String: ");
    scanf("%s", string);

    length = strlen(string);

    for (i = 0; i < length/2; i++) {
        if (string[i] != string[length-i-1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Palindrome.\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}
