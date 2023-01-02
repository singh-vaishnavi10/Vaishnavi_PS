#include <stdio.h>

int main(void) {
  int i, j, n, l, s, k;
  printf("Enter no. of lines in pattern\n");
  scanf("%d", &s);
  n = (s + 1) / 2;
  l=1;
  k=1;
  for (i = n; i >= 1 ; i--) 
  {
    for (j = 1; j <= 2 * i - 1; j++) 
    {
      printf("* ");
    }
    printf("\n");
    printf("\n");
    for (j = 1; j <= l; j++) 
    {
      printf("  ");
    }
    l++;
  }
  l = l-1;
  for (i = 1; i <= n-1 ; i++) 
  {
    for (j = 1; j <= l; j++) 
    {
      printf("  ");
    }
    for (j = 1; j <= 2 * k - 1; j++) 
    {
      printf("* ");
    }
    printf("\n");
    printf("\n");
    l--;
    k++;
  }
  return 0;
}