#include <stdio.h>
#include<string.h>
int main(void) {
	char s1[100],s2[10];
	int i,j;
	int m=strlen(s2);
	scanf("%s",s1);
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		
	}
	for(j=0;j<m;j++,i++)
	{
		s1[i]=s2[j];
		
	}
	s1[i]='\0';
	printf("%s",s1);
	return 0;
}
