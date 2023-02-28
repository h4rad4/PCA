//Faça um programa que leia do teclado cinco números e imprima na tela a soma destes cinco números. O programa só pode utilizar 2 (duas) variáveis.

# include <stdio.h>

int main(int argc, char const *argv[])
{
    float n, soma;

    for(int i = 1; i < 6; i++){
        printf("Insira o numero: ");
        scanf("%f", &n);

        soma += n;
    }

    printf("Soma = %.2f", soma);
    
    return 0;
}
