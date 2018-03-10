#include<stdio.h>
int main(void)
{
    int a[100],n,i;
    scanf("%d",&n);
    a[0]=1;a[1]=1;
    for(i=3;i<=n;i++)
    {
        a[i-1]=a[i-2]+a[i-3];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
