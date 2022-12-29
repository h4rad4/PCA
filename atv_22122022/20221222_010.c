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