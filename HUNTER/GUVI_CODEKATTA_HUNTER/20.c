#include <stdio.h>
int main()
{
    int num,m,i,j,flag;
    int t,count=0;
    scanf("%d %d",&num,&m);
    t=num;
    if (num%2==0)
    {
        num++;
    }
    for (i=num;i<=m;i=i+2)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if((i%j)==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
