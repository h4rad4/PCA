# include <stdio.h>
# include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, soma = 0;

    for(int i = 1; i < 51; i++){
        printf("Insira o numero %i: ", i);
        scanf("%i", &n);

        if(n%2 != 0) {
            soma++;
        }
        //printf("Soma = %i \n", soma);  
    }

    printf("Soma = %i \n", soma);  
    
    return 0;
}
