#include <stdio.h>
#include <string.h>
int palindrome(char *s) 
{
  int i, l = 0;
  for(i=0;s[i] != '\0';i++) 
  {
    if(s[i]!=' ')
    l++;
  }
  return l;
}
int main(void) 
{
  char s[50];
  printf("Enter the string:\n");
  scanf("%[^\n]s", s);
  printf("%d", palindrome(s));
  return 0;
}