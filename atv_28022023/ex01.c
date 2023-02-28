/*
----------------------------------------------------------------------------------------------------------------------------------
O professor têm duas equipes na disciplina, cada equipe está formada por seis alunos identificados pelo nome e o sexo.
Cada aluno obteve uma nota final na disciplina (valor real entre 0 e 10).

a) Crie estruturas de dados baseadas em arrays para trabalhar com as informações da turma:

    Uma matriz para os nomes dos alunos das duas equipes. As equipes devem estar em dimensões diferentes.
    Uma matriz para o sexo dos alunos das duas equipes. Utilizar um caractere (não uma string) para representar o sexo.
    Uma matriz para as notas dos alunos das duas equipes

b) Atribua valores para cada estrutura criada na letra A) (só pode usar uma linha de código para inicializar cada estrutura).

c) Determine e imprima qual equipe tem a maior quantidade de mulheres.

d) Como parte de um processo de seleção para participar de um projeto, se precisa ter nota final maior ou igual de 8.0, e
ser do sexo feminino. Crie e preencha uma nova estrutura com os nomes das alunas das duas equipes que atendem a essas condições.

e)  Imprimir os nomes das alunas que podem participar do projeto.

f) (Faça uma função que acrescente um ponto para as alunas de uma equipe e use essa função para acrescentar um ponto às alunas
da segunda equipe)

g) Faça uma função que permita adicionar um novo aluno em uma das equipes, solicitando as informações do mesmo ao usuário.

(Nota: não pode usar variáveis globais na solução)
----------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char eq[13][100] = {"Isabella", "Lucas", "Ana", "Pedro", "Julia", "Victor",
                        "Carlos", "Lilian", "Gabriel", "Camila", "Vaio", "Laravel"};

    int notas[2][7] = {{1, 3, 5, 7, 9, 11},
                       {2, 4, 6, 8, 10, 12}};

    char sexo[13][1] = {"F", "M", "F", "M", "F", "M",
                        "M", "F", "M", "F", "M", "F"};

        printf("\n");
    letraC(eq, notas, sexo);
        printf("\n");
    letraD(eq, notas, sexo);
        printf("\n");
    letraF(eq, notas, sexo);
        printf("\n");
    letraG(eq, notas, sexo);

    return 0;
}

void letraC(char eq[12][100], int notas[2][6], char sexo[12][1])
{
    int count1 = 0, count2 = 0;

    for (int i = 0; i < 6; i++)
    {
        if (sexo[i][0] == 'F')
            count1++;
    }

    for (int j = 6; j < 12; j++)
    {
        if (sexo[j][0] == 'F')
            count2++;
    }

    if (count1 > count2)
    {
        printf("Eq. 01 > Eq. 02 ");
    }
    else if (count2 > count1)
    {
        printf("Eq. 02 > Eq. 01");
    }
    else
    {
        printf("As equipes tem a mesma quantidade de pessoas. ");
    }
}

void letraD(char eq[12][100], int notas[2][6], char sexo[12][1])
{
    char escolhidas[6][100];

    printf("Alunas aptas p/ o projeto: ");

    for (int i = 0; i < 12; i++)
    {
        for (int j = i; i < 12; j++)
        {
            if (notas[i][j] >= 8 && sexo[j][0] == 'F')
            {
                printf("%s ", eq[j]);
            }
        }
    }
}

void letraF(char eq[12][100], int notas[2][6])
{
    printf("Notas das [M E N I N A S] somadas: ");
    for (int j = 0; j < 6; j++)
    {
        notas[1][j] += 1;

        printf("%i ", notas[1][j]);
    }
}

void letraG(char eq[13][100], int notas[2][7], char sexo[13][1])
{
    int option;

    printf("Insira o nome do novo aluno. ");
    scanf(" %s", &eq[13]);

    setbuf(stdin, NULL);
    printf("Insira o sexo do novo aluno. ");
    scanf(" %s", &sexo[13]);

    setbuf(stdin, NULL);
    printf("Insira a nota do novo aluno. ");
    scanf("%i", &notas[2]);

    for (int i = 0; i < 14; i++)
    {
        printf("%s ", eq[i]);
    }
}
