#include <stdio.h>
int fac(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return n * fac(n - 1);
}
int main(void) {
  int n;
  printf("Enter the no. ");
  scanf("%d", &n);
  printf("Factorial of the no. is %d", fac(n));
  return 0;
}