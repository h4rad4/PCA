#include <stdio.h>
#include <string.h>

char nomes[20][120];
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
        ordenador();
    if (esc == 2)
        deletador();
    if (esc == 3)
        impressor();

    return 0;
}

void impressor()
{
    printf("\nResultado: \n");
    for (int i = 0; i <= c; i++)
    {
        printf("%s\n", nomes[i]);
    }
}

void deletador()
{
    char ap[120];

    setbuf(stdin, NULL);
    printf("Qual nome quer deletar? ");
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

void ordenador()
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