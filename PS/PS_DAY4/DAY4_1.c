#include <stdio.h>
#include <string.h>
char *palindrome(int n);
int reverse(int n);
int main(void) {
  int n;
  printf("Enter the no.to check\n");
  scanf("%d", &n);
  printf("Given no. %d is %s", n, palindrome(n));
  return 0;
}
char *palindrome(int n) {
  if (n == reverse(n))
    return "palindrome";
  else
    return "not palindrome";
}
int reverse(int n) {
  int r;
  static int sum = 0;
  if (n > 0) {
    r = n % 10;
    sum = sum * 10 + r;
    reverse(n / 10);
  }
  if (n <= 0)
    return sum;
}