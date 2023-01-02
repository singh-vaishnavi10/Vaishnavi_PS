#include <stdio.h>
#include<math.h>
int mean(int a[])
{
  float sum=0;
  for(int i=0;i<5;i++)
  {
    sum=sum+a[i];  
  }
  return sum/5;
}
int median(int a[])
{
  return a[i];
}
int main(void) 
{ int a[]={1,2,3,4,5};
  printf("Mean of the numbers is %d",mean(a));
  printf("Median of the numbers is %d",median(a));
  return 0;
}