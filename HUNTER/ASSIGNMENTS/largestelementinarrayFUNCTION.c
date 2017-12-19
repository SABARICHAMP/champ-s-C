#include<stdio.h>
int main()
{
int n,a[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int c = large(a,n);
printf("the largest element in the array is %d",c);
}




int large(int x[100],int n)
{
int temp;
for(int i=0;i<n;i++)
{
for(int j=0;j<i;j++)
{
if(x[i]<x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
}
printf("%d is the largest element in the array",x[7]);
return(x[7]);
}
