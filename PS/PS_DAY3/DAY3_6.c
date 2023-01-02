#include <math.h>
#include <stdio.h>
float sum(int n, int x);
int main(void) {
  int n;
  float x;
  printf("Enter the no. of terms:\n");
  scanf("%d", &n);
  printf("Enter the value of x:\n");
  scanf("%f", &x);
  printf("Sum of the first %d terms of the series is %f", n, sum(n, x));
  return 0;
}
float sum(int n, int x) {
  int i, j;
  float sum = 1;
  float r = -1;
  for (i = 2; i <= 2 * n; i = i + 2) {
    float fac = 1;
    for (j = 1; j <= i; j++) {
      fac = fac * j;
    }
    sum = sum + r * pow(x, i) / fac;
    r = r * (-1);
  }
  return sum;
}