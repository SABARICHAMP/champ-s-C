#include<stdio.h>
#include<string.h>
int main(void)
{
    int x,y,z;
    int s,tn,i;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    s= (y*(2*x+(y-1)*z))/2;
    tn=x+(y-1)*z;
    for(i=x;i<=tn;i=i+z)
    {
        if(i!=tn)
        {
           
        }
        else
        {
            printf("%d",s);
        }
    }
    return 0;
}
