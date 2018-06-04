#include <stdio.h>
int main()
{
    int temp =0;
    int n,num[100];
    int count=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
               
            }
        }

    }
    
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]==num[j])
			{
				printf("\n%d",num[i]);
				count=count+1;
			}
		}
	}
		if(count==0)
		{
			printf("\nUNIQUE");
		}
    return 0;
}
