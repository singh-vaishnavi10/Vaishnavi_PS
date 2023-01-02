#include <stdio.h>

int main(void) {
  int i, j, n, k;
  printf("Enter the no. of lines in pattern\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    k = i;
    for (j = 1; j <= i; j++) {
      printf("%d", k);
      k++;
    }
    printf("\n");
  }
  return 0;
}