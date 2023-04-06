/*
--------------------------------------------------------------------------
Um número na forma n3 é igual à soma de n ímpares consecutivos. 
Por exemplo: 33=27, 33=7+9+11

Dado um número p, determine os ímpares consecutivos cuja soma é igual a
n3 para n assumindo valores de 1 a p.
--------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
  int m,n, i, An;

  printf("Digite o valor de m: ");
  scanf("%d", &m);

  An = 1;
  for (n = 1; n <= m; n++) {
    printf("%d^3 = %d", n, An);

    for (i = 1; i < n; i++) {
      printf("+%d", An + 2 * i);
    }

    An = An + 2 * n;
    printf("\n");    
  }

  return 0;
}