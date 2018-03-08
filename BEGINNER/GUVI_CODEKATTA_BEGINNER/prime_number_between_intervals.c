#include<stdio.h>
#include<string.h>
int main(void)
{
  int x,y,count,i,j;
  scanf("%d%d",&x,&y);
  for(i=a+1;i<b;i++)
  {
  int count=0;
    for(j=2;j<=i/2;j++)
     {
       if(i%j==0)
       {
          count++;
          break;
        }
      }
  if(count==0)
  {
    printf("%d",i);
  }
  }
  return 0;
  }
