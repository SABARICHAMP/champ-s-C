#include <stdio.h>

int main(void) {
	char s1[15],s2[15];
	scanf("%s %s",s1,s2);
	int i,j,flag;
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;s2[j]!='\0';j++)
		{
			if(s1[i]==s2[j])
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("yes");
			break;
		}
		
		
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
