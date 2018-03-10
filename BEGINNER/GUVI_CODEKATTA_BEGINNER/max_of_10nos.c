#include<stdio.h>
int main(void)
{
    int a[100],max,i;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[i];
    for(int i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
