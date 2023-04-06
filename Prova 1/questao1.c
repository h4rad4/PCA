/*
Faça um programa que leia as notas finais de vários alunos de uma turma e mostre a maior
nota, a menor nota e a média aritmética simples das notas da turma. O programa pára
quando encontrar uma nota negativa.
*/

#include <stdio.h>

void input()
{
    float lowest, highest, n, average = 0, sum = 0;

    for (int i = 1; i > 0; i++)
    {
        printf("Input the student's grade: ");
        scanf("%f", &n);

        if (n > 0)
        {
            sum += n;
            average = sum / i;
        }

        if (n < 0)
        {
            printf("Stopping program...\n");
            break;
        }

        if (i == 1)
        {
            highest = lowest = n;
        } else if (n > highest)
        {
            highest = n;
        } else if (n < lowest)
        {
            lowest = n;
        }
    }

    printf("Highest grade: [%.2f]\n", highest);
    printf("Lowest grade: [%.2f]\n", lowest);
    printf("Average grade: [%.2f]\n", average);
}

int main(int argc, char const *argv[])
{
    input();
    return 0;
}
