#include <stdio.h>

int main(void) {
  int i, j, n, l, s;
  printf("Enter no. of lines in pattern\n");
  scanf("%d", &s);
  n = (s + 1) / 2;
  l = n - 1;
  for (i = 1; i <= n; i++) {
    for (j = l; j >= 1; j--) {
      printf("  ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("* ");
    }
    printf("\n");
    printf("\n");
    l--;
  }
  l = 1;
  for (i = n - 1; i >= 1; i--) {
    for (j = l; j >= 1; j--) {
      printf("  ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("* ");
    }
    printf("\n");
    printf("\n");
    l++;
  }
  return 0;
}