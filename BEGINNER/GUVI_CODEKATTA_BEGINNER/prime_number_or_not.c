#include<stdio.h>
#include<string.h>
int main(void)
{
  int i,n,count=0;
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
     if(a%i==0)
     {
        count++;
      }
   }
  if(count==0)
  {
  printf("Prime number");
  }
  else
  {
  printf("Not a prime number");
  }
  return 0;
}
