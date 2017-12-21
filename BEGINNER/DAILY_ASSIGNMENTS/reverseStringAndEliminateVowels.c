#include <stdio.h>
#include<string.h>

int main(void)
{
	
	char a[100];
    scanf("%s",a);
    printf("\n%s\n",a);
	for(int i=strlen(a);i>=0;i--)
	{
	    printf("%c",a[i]);
	}
	printf("\n");
	for(int i=strlen(a);i>=0;i--)
	{
	
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='A'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		{
			a[i]=a[i-1];
			i--;
		}
		printf("%c",a[i]);
	}
	
	
	return 0;
}
