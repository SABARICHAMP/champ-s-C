#include <stdio.h>
#include<string.h>
int main(void) {
	char s1[15],s2[15];
	int m,n,i,flag;
	scanf("%s %s",s1,s2);
	n=strlen(s1);
	m=strlen(s2);
	if(n==m)
	{
	for(i=0;i<n;i++)
	{
		if(s1[i]==s2[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			printf("No");
			break;
		}
	}
	}
	if(flag==1)
	printf("yes");
	return 0;
}
