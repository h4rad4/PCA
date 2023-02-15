#include <stdio.h>
#include <string.h>

char nomes[20][120]; // tamanho da matriz ajustado para 20
int c = -1;

void imprimir();
void apagar();
void alfab();

int main(int argc, char const *argv[])
{
    char op = ' ';
    int esc;

    while (op != 'n' && op != 'N')
    {
        c++;

        setbuf(stdin, NULL);
        printf("Digite o nome %d: ", c);
        fgets(nomes[c], sizeof(nomes[c]), stdin);

        setbuf(stdin, NULL);
        printf("Continuar? [s] [n]\n");
        scanf("%c", &op);

        nomes[c][strlen(nomes[c]) - 1] = '\0';

        if (c == 19)
        {
            break;
        }
    }

    setbuf(stdin, NULL);
    printf("Opcoes:\n");
    printf("1. Ordenar \n2. Apagar um nome \n3. Imprimir string \n");

    printf("");
    scanf("%d", &esc);

    while (esc > 3 || esc < 1)
    {
        printf("Invalido.\n");
        printf("Escolha novamente. ");
        scanf("%d", &esc);
    }

    if (esc == 1)
        ord();
    if (esc == 2)
        delete();
    if (esc == 3)
        impressora();

    return 0;
}

void impressora()
{
    printf("\nResultado: \n");
    for (int i = 0; i <= c; i++)
    {
        printf("%s\n", nomes[i]);
    }
}

void delete()
{
    char ap[120];

    setbuf(stdin, NULL);
    printf("Qual nome queres apagar? ");
    fgets(ap, sizeof(ap), stdin);
    ap[strlen(ap) - 1] = '\0';

    printf("\nResultado: \n");
    for (int i = 0; i <= c; i++)
    {
        if (strcmp(nomes[i], ap) != 0)
        {
            printf("%s\n", nomes[i]);
        }
    }
}

void ord()
{

    int a, b;
    char aux[120];

    for (int x = 0; x < c; x++)
    {
        a = x;
        for (b = x + 1; b <= c; b++)
        {
            if (strcmp(nomes[b], nomes[a]) < 0)
            {
                a = b;
            }
        }

        if (a != x)
        {
            strcpy(aux, nomes[x]);
            strcpy(nomes[x], nomes[a]);
            strcpy(nomes[a], aux);
        }
    }

    printf("\nResultado: \n");
    for (int i = 0; i <= c; i++)
    {
        printf("%s\n", nomes[i]);
    }
}