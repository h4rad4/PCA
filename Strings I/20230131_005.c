/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
O código de Cesar é  uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta no 
alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante.

Implemente um programa que faça uso desse Código de Cesar (3 posições), entre com uma string e retorne a string codificada. 

Exemplo:

    String: a ligeira raposa marrom saltou sobre o cachorro cansado
    Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[100];

    printf("String: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\nString size: %d\n", strlen(str1));
    
    for (int i = 0; i < strlen(str1) - 1; i++) {
        if (str1[i] != ' ') {
            str1[i] += 3;
        }
    }

    printf("Result: ");
    for (int i = 0; i < strlen(str1) - 1; i++) {
        printf("%c", str1[i]);
    }

    return 0;
}