#include <stdio.h>

int main(void) {
  int i, j, n, l, k;
  printf("Enter the no. of lines in pattern\n");
  scanf("%d", &n);
  // 1<=n>=9
  l = n - 1;
  for (i = 1; i <= n; i++) {
    k = i;
    for (j = l; j >= 1; j--) {
      printf(" ");
    }
    for (j = 1; j <= i; j++) {
      printf("%d", k);
      k--;
    }
    k = k + 2;
    for (j = 1; j <= i - 1; j++) {
      printf("%d", k);
      k++;
    }
    printf("\n");
    l--;
  }
  return 0;
}