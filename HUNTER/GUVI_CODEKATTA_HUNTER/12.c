#include<stdio.h>
int main()
{
  int a[100],length,i,j,temp,n;
  scanf("%d",&length);
  for(i=0;i<length;i++)
   {
    scanf("%d",&a[i]);
    }
  for(i=0;i<length;i++)
    {
     for(j=0;j<length-1;j++)
      {
       if(a[j]>a[j+1])
        {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         }
        }
      }
   printf("The new array is:");
   for(i=0;i<length;i++)
   {
    printf(" %d ",[i]);
   }
   scanf("%d",&n);
   printf("\nThe %d th smallest number is: %d",n,a[n-1]);
   return 0;
}
