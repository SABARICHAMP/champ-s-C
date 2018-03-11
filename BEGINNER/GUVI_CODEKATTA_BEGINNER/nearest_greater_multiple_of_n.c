#include<stdio.h>
#include<string.h>

int main()
{
  int n;
  scanf("%d",&n);
  int x=n%10;
  printf("%d",(n+10-x));

}
