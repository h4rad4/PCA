/*
-------------------------------------------------------------------------------------------------------------------------------
Um centro materno-infantil deseja criar um programa para recomendar aos médicos sobre o tipo de parto a ser adotado.
O mecanismo de recomendação utiliza o peso do feto e quantidade de semanas de gestação para sugerir o tipo de parto mais indicado.

Desenvolva um programa na linguagem C, o qual deverá:
- Criar uma função para ler o peso do feto em gramas e a quantidade de semanas da gestação.
- Criar uma  função para:

    -Caso o peso do feto seja inferior que 100 gramas ou a quantidade de semanas menor que 28, o programa deverá exibir a mensagem "Parto não deverá ser realizado,
     reavaliar clinicamente" e encerrar a execução.

    -Caso contrário, o programa deverá calcular a quantidade de meses (considerar 4 semanas para cada mês) do feto e exibir uma das recomendações abaixo:
        .Peso superior a 2.500 gramas e com mais de 7 meses: "Parto normal";
        .Peso superior a 2.500 gramas e abaixo ou com 7 meses: "Parto Cesariana";
        .Entre 2.000 gramas e 1.500 gramas e acima de 9 meses: "Parto normal";
        .Qualquer outra combinação, "Parto Cesariana".

Utilizar as duas funções num programa.
-------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

float weight, weeks;
int boolean = 1;

// 1. Criar uma função para ler o peso do feto em gramas e a quantidade de semanas da gestação.
void IfNotAble()
{
    printf("Weight (grams): ");
    scanf("%f", &weight);

    printf("Gestation time (weeks): ");
    scanf("%f", &weeks);

    if (weight < 100 || weeks < 28)
    {
        printf("The birth mustn't happen. Clinically reevaluate.");
        boolean = 0;
    }
}

// 2.1. Calcular a quantidade de meses (considerar 4 semanas para cada mês) do feto e exibir uma das recomendações.

void IfAble()
{
    float months = weeks / 4;

    if (weight > 2500 && months > 7)
    {
        printf("Normal birth is recommended."); // Peso superior a 2.500 gramas e com mais de 7 meses: "Parto normal";
    }
    else if (weight > 2500 && months <= 7)
    {
        printf("Cesarean birth is recommended."); // Entre 2.000 gramas e 1.500 gramas e acima de 9 meses: "Parto normal";
    }
    else if (weight > 1500 && weight < 2000 && months > 9)
    {
        printf("Normal birth is recommended"); // Entre 2.000 gramas e 1.500 gramas e acima de 9 meses: "Parto normal";
    }
    else
    {
        printf("Cesarean birth is recommended"); // Qualquer outra combinação, "Parto Cesariana".
    }
}

int main(int argc, char const *argv[])
{

    IfNotAble();

    if (boolean == 1)
    {
        IfAble();
    }
    return 0;
}
