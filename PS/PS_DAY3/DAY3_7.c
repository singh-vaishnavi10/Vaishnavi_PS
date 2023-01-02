#include <math.h>
#include <stdio.h>
float sum(int n);
int main(void) {
  int n;
  printf("Enter the no. of terms:\n");
  scanf("%d", &n);
  printf("Sum of the first %d terms of the series is %f", n, sum(n));
  return 0;
}
float sum(int n) {
  int i, j;
  float sum = 0;
  float r = 1;
  for (i = 1; i <= n; i++) {
    float fac = 1;
    for (j = 1; j <= 2 * i - 1; j++) {
      fac = fac * j;
    }
    sum = sum + r * i / fac;
    r = r * (-1);
  }
  return sum;
}