#include<stdio.h>
#include<string.h>
int main(void)
{
int a,t,r;
scanf("%d",&a);
t=a;
while(t!=0)
{
  r=r*10;
  r=r+(t%10);
  t=t/10;
 }
 if(r==a)
 {
    printf("Palindrome");
  }
  else
  {
  printf("Not a palindrome");
  }
  return 0;
  }
