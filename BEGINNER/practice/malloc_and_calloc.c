# include <stdio.h>
#include<stdlib.h>


int main()
{
    int *p;
    int i;
   p=(int *)malloc(2*sizeof(int));
    //p=(int *)calloc(2,sizeof(int));
    for(i=0;i<7;i++)
    {
        scanf("%d",p+i);
        printf("%d ",*(p+i));
    }

return 0;
}
