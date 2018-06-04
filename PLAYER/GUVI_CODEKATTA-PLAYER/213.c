#include<stdio.h>
void main()
{
  int num[10][10],r,c,i,j,pro=1,pro1=1,sum=0;
  printf("\nEnter rows");
  scanf("%d",&r);
  scanf("%d",&c);
   for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&num[i][j]);
    }
  }
  printf("\nMatrix");
  printf("\n");
   for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d",num[i][j]);
      printf("\t");
    }
    printf("\n");
  }


  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i==j)
      {
        pro=pro*a[i][j];
      }
    }
  }
  for(i=0,j=c-1;i<r,j>=0;i++,j--)
  {
    pro1=pro1*num[i][j];
  }
  sum=pro+pro1;
  printf("Result:%d",sum);
  
}
