#include <stdio.h>
#include <string.h>
int main(void) {
	char s1[100],s2[100];
	scanf("%s",s1);
	int n;
	n=strlen(s1);
	char temp;
	for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
	{
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
	}
	int j=0;
	for(int i=0;i<(n*2);i++)
	{
		if(i%2==0)
		{
			
			s2[i]=s1[j];
			j++;
		}
		else
		{
			s2[i]='-';
		}
	}
	printf("%s",s2);
	return 0;
}
