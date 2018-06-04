#include <stdio.h>
#include<string.h>
int main(void) {
	char s[100],temp;
	int i,j,k,length;
	scanf("%[^\n]s",s);
	length=strlen(s);
	for(i=0,j=0;j<length;j++)
	{
		if(s[j]==' ')
		{
			if(j<length-1)
			{
				k=j-1;
			}
			else
			{
				k=j;
			}
			while(i<k)
			{
				temp=s[i];
				s[i]=s[k];
				s[k]=temp;
				i++;
				k--;
			}
			i=j+1;
		}
	}
	printf("%s",s);
	return 0;
}
