/*
-------------------------------------------------------------------------------------------------------------------------------------------------
Na turma existem 5 equipes, cada equipe está integrada por 4 alunos definidos pelo nome e sobrenome do aluno.
Crie um programa que permita armazenar os integrantes das equipes e incorpore a funcionalidade que dado um nome retorne em a equipe do aluno.
-------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

char name[30];
char equipe[5][4][30];
char op = ' ';

int main()
{

    for (int a = 0; a < 5; a++)
    {
        printf("EQUIPE [%i]: \n", a);
        for (int i = 0; i < 4; i++)
        {
            setbuf(stdin, NULL);
            printf("Insira o nome e sobrenome do aluno %i. ", i + 1);
            scanf("%s", equipe[a][i]);
        }
    }

    setbuf(stdin, NULL);
    printf("\nDeseja pesquisar um aluno? [s] [n]\n");
    scanf("%c", &op);

    if (op == 's' || op == 'S')
        search();

    if (op == 'n' || 'N')
    {
        printf("\n\nEncerrando programa... ");
    }

    return 0;
}

void search()
{
    printf("\nQual aluno deseja pesquisar? ");
    scanf("%s", name);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(equipe[i][j], name) == 0)
            {
                printf("O aluno %s pertence a equipe %d.\n", name, i);
                return;
            }
        }
    }

    printf("Aluno nao encontrado.\n");
}