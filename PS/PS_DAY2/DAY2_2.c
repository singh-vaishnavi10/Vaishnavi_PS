#include <stdio.h>

int main(void) {
  int i, j, n, k, l;
  printf("Enter the no. of lines in pattern\n");
  scanf("%d", &n);
  l = n - 1;
  for (i = 1; i <= n; i++) {
    for (j = l; j >= 1; j--) {
      printf(" ");
    }
    k = i;
    for (j = 1; j <= i; j++) {
      printf("%d ", k);
      k++;
    }
    printf("\n");
    l = l - 1;
  }
  return 0;
}