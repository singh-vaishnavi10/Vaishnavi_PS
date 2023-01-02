#include <stdio.h>
int gcd(int a, int b) {
  if (a == b)
    return a;
  else if (a > b)
    return gcd(a - b, b);
  else
    return gcd(a, b - a);
}
int main(void) {
  int a, b;
  printf("Enter the two numbers\n");
  scanf("%d%d", &a, &b);
  printf("%d", gcd(a, b));
  return 0;
}