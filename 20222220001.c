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
