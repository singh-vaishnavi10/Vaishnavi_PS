#include <stdio.h>
#include <string.h>
int strlength(char *s) {
  int i = 0, l = 0;
  while (s[i] != '\0') {
    l++;
    i++;
  }
  return l;
}
char *reverse(char *s) {
  int i;
  int l = strlength(s);
  for (i = 0; i < l / 2; i++) {
    int temp = s[i];
    s[i] = s[l - i - 1];
    s[l - i - 1] = temp;
  }
  return s;
}
int main(void) {
  char s[20];
  printf("Enter the string:\n");
  scanf("%[^\n]s", s);
  printf("%s", reverse(s));
  return 0;
}