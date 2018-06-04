#include <stdio.h>
#include<string.h>
int main(void) {
	char s1[15],s2[15];
	int m,n,i,flag,u,v;
	scanf("%s %s",s1,s2);
	n=strlen(s1);
	m=strlen(s2);
	for(i=0;i<n;i++)
	{
		if(s1[i]>=65 && s1[i]<=91)
		{
			u=s1[i];
			v=u+32;
			s1[i]=v;
		}
	}
	for(i=0;i<m;i++)
	{
		if(s2[i]>=65 && s2[i]<=91)
		{
			u=s2[i];
			v=u+32;
			s2[i]=v;
		}
	}
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
