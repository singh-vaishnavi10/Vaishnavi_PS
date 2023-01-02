#include <stdio.h>
int sum(int n);
int main(void) {
  int n;
  printf("Enter the no. of terms:\n");
  scanf("%d", &n);
  printf("Sum of the first %d terms of the series is %d", n, sum(n));
  return 0;
}
int sum(int n) {
  int i, j;
  int sum = 0;
  for (i = 1; i <= n; i++) {
    int fac = 1;
    for (j = 1; j <= i; j++) {
      fac = fac * j;
    }
    sum = sum + fac / i;
  }
  return sum;
}