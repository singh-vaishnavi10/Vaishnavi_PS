#include <stdio.h>
int main(void) {
  char i, j, n, k;
  printf("Enter the first character in last line of pattern\n");
  scanf("%c", &n);
  for (i = 'A'; i <= n; i++) {
    k = i;
    for (j = 'A'; j <= i; j++) {
      printf("%c", k);
      k++;
    }
    printf("\n");
  }

  return 0;
}