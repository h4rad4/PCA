/*
-------------------------------------------------------------------------------------------------------------------------------------------------------
O programa deve receber como entrada três notas de cada aluno em uma linha;
Deve perguntar ao usuário se deseja inserir as notas de outro aluno, e:

Caso a resposta seja “sim” deve solicitar os dados do próximo aluno.
Caso a resposta seja “não” deve mostrar a maior e a menor nota do primeiro, do segundo, e do terceiro exercício e a maior e a menor média.
-------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int main()
{
    int choice;
    float notas, maior, menor, soma;
    float media;

    while (choice != 0){
        printf(" \n ----- [ALUNO] ------ \n \n");

        for(int i=1; i<4; i++){
            printf("Digite as notas (%i): ", i);
            scanf("%f", &notas);
            soma += notas;
            media = soma/3;


            if (i == 1) {
                maior = menor = notas;
            } else if (notas > maior)
            {
                maior = notas;
            } else if (notas < menor)
            {
                menor = notas;
            }


            if (i == 3)
            {
                printf("Quer cadastrar mais um aluno? [1] SIM [0] NAO \n");
                scanf("%d", &choice);
                
                if (choice == 1) {
                    i = 0;
                    i++;
                    soma = 0;

                    printf(" \n ----- [ALUNO] ----- \n \n");
                    printf("Digita as notas (%i): ", i);
                    scanf("%f", &notas);
                    soma  += notas;
                   // media = soma/3;
                }
                else {
                printf("Maior nota: %.2f \n", maior);
                printf("Menor nota: %.2f \n", menor);
                printf("Media final = %.2f", media);
                }
            }
        }
    }

    return 0;
}