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
  int i;
  float sum = 0;
  for (i = 1; i <= n; i++) {
    sum = sum + i * (i + 1) * (i + 2);
  }
  return sum;
}