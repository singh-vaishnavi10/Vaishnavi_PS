#include <stdio.h>
#include <string.h>
const char* compare(char* s,char* t)
{ int i=0;
  int flag=0;
  int l=strlen(s);
  int k=strlen(t);
  if(l == k)
  {
  while(s[i]!='\0')
    {
      if(s[i]!=t[i])
      {
       return "Strings are not equal";
       break;
      }
      else
      flag=1;

      i++;
    }
  if(flag==1)
    return "Strings are equal";
  } 
}
int main(void) 
{
  char s[20],t[20];
  printf("Enter the string 1\n");
  scanf("%[^\n]s",s);
  printf("Enter the string 2\n");
  scanf("%[^\n]s",t);
  compare(s,t);
}