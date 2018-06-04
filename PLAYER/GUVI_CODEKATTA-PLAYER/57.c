#include <stdio.h>

int main(void) {
	char s[15],b;
	scanf("%s %c",s,&b);
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==b)
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
