#include <stdio.h>

int main(void) {
	char s[10];
	scanf("%s",s);
	int i,flag=0,j;
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
			{
				flag=1;
				printf("yes");
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
		
	
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
