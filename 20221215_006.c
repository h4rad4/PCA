# include <stdio.h>

/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês.
*/

int main(int argc, char const *argv[])
{
    float money, time, salary;

    printf("quanto vc ganha: ");
    scanf("%f", &money);

    printf("quanto vc trabalha: ");
    scanf("%f", &time);

    salary = money * time;

    printf("salario = %.2f", salary);

    return 0;
}
