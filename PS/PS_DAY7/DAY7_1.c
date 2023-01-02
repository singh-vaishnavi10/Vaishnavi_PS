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
int main(void) {
  char s[20];
  printf("Enter the string:\n");
  scanf("%[^\n]s", s);
  int l1 = strlen(s);
  int l2 = strlength(s);
  printf("length of the string by user defined function is %d and by "
         "predefined function is %d",
         l1, l2);
  return 0;
}