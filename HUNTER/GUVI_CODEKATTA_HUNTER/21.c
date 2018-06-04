#include<stdio.h>
int main()
{
    int a[2][2]={1,1,1,0},r=2,c=2,element=0;
    int r , c;
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
          if(element==a[r][c])
          {
              for(r=0;r<2;r++)
              {
                  if(a[r][c]==1)
                  a[r][c]=2;
              }
              for(c=0;c<2;c++)
              {
                  if(a[r][c]==1)
                    a[r][c]=2;
              }
          }
        }
    }
    for(r=0;r<2;r++,printf("\n"))
    {
      for(c=0;c<2;c++)
      {
          if(a[r][c]==2)

          {
              a[r][c]=0;
          }
          printf("%d  ",a[r][c]);
    }
    }


    return 0;

}
