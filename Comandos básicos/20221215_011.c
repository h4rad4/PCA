/* 
------------------------------------------------------------------------------------------------------------------------
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:

- Salário bruto.
- Quanto pagou ao INSS.
- Quanto pagou ao sindicato.
- O salário líquido (Salário Líquido = Salário Bruto - Descontos
------------------------------------------------------------------------------------------------------------------------
*/
# include <stdio.h>

int main()
{
    float money, hours, salary, real_salary;
    float lion, inss, syndicate;

    printf("Input your money/h: ");
    scanf("%f", &money);

    printf("Input your hours worked: ");
    scanf("%f", &hours);

    salary = money*hours;
    
    lion = salary* 11/100;
    inss = salary* 8/100;
    syndicate = salary* 5/100;

    real_salary = salary - lion - inss - syndicate;

    printf("Your salary is: R$ %.2f \n", salary);
    printf("The lion took R$ %f from you \n", inss);
    printf("You paid R$ %.2f to the syndicate \n", syndicate);
    printf("Your liquid salary is: R$ %f \n", real_salary);

    return 0;
}
