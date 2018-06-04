#include <stdio.h>

int main(void) {
	char s[15],b;
	scanf("%s %c",s,&b);
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==b)
		{
			printf("%d",i+1);
		}
	}
	return 0;
}
