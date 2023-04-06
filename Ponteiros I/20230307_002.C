/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou
NULL caso o valor não esteja no vetor;

- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar e imprimir os endereços de memória de todas as ocorrências do valor 2, em um laço, até que todo o vetor
tenha sido pesquisado.
- Defina a constante NULL se necessário.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int search(int* p1, int* p2)
{
    int c = 0;

    printf("O numero 2 se encontra em: ");

    for (int* i = p1; i <= p2; i++)
    {
        if (*i == 2)
        {
            c++;
            printf("%p ", i);
        }        
    }
    
    if (c == 0)
        printf("NULL");
}

int main(int argc, char const *argv[])
{
    int v[10] = {0, 2, 9, 2, 7, 2, 5, 1, 3, 4};

    // printf("%i / %i / %i", p2, *p2, &p2);

    search(&v[0], &v[9]);

    return 0;
}