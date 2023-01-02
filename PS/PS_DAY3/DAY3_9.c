#include <stdio.h>

int main(void) {
  int n, i, j;
  printf("Enter the number of terms:\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf(" ");
  }
}