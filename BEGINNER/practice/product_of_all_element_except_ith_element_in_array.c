#include<stdio.h>

int main() {
int a[100],b[100],i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    b[i]=1;
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(j!=i)
        {
            b[i]*=a[j];
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d ",b[i]);
}
}
