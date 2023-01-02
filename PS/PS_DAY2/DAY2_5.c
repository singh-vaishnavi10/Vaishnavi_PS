#include <stdio.h>

int main(void) {
  char i, j, n, k;
  printf("Enter the first character in pattern\n");
  scanf("%c", &n);
  k = n;
  for (i = 'A'; i <= n; i++) {
    for (j = k; j <= n; j++) {
      printf("%c", j);
    }
    k--;
    printf("\n");
  }

  return 0;
}