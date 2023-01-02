#include <stdio.h>
int power(int n, int r) {
  if (r == 1)
    return n;
  else if (r == 0)
    return 1;
  else
    return n * power(n, r - 1);
}
int main(void) {
  int n, r;
  printf("Enter the no.\n");
  scanf("%d", &n);
  printf("Enter the power\n");
  scanf("%d", &r);
  printf("%d", power(n, r));
  return 0;
}