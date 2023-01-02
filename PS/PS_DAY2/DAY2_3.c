#include <stdio.h>

int main(void) {
  char i, j, n;
  printf("Enter the last character in pattern\n");
  scanf("%c", &n);
  for (i = 'A'; i <= n; i++) {
    for (j = 'A'; j <= i; j++) {
      printf("%c", i);
    }
    printf("\n");
  }

  return 0;
}