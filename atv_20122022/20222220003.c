# include <stdio.h>
# include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, soma = 0;

    for(int i = 100; i < 201; i++){
        printf("Insira o numero %i: ", i);
        scanf("%i", &n);

        if (n < 99 || n > 200){
            printf("Invalido. Insira um valor entre 100 e 200. \n");
        }

        if (n > 99 && n < 201) {

            if (n%2 != 0) {
                soma++;
            } 
        }
    }

    printf("Soma = %i \n", soma);  
    
    return 0;
}
