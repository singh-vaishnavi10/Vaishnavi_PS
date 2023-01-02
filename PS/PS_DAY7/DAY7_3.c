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
const char * palindrome(char *s) {
  int i;
  int l = strlength(s);
  
  for (i = 0; i <= l / 2; i++) {
    int temp = s[i];
    s[i] = s[l - i - 1];
    s[l - i - 1] = temp;
  }
  char g[20];
  for(i=0;i<=l;i++)
  {
    g[i]=s[i];
  }
  for(i=0;i<=l;i++)
  {
    if(s[i]!=g[i])
    return "pal";
  }
  return "no";
}
int main(void) {
  char s[20];
  printf("Enter the string:\n");
  scanf("%[^\n]s", s);
  printf("%s", palindrome(s));
  return 0;
}